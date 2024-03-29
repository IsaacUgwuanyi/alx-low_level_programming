#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	/* iterate through the list and free each node */
	while (head != NULL)
	{
	temp_node = head;
	head = head->next;
	free(temp_node);
	}
}
