#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* check if the list is empty, if so, set the new node as the head */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	/* iterate through the list to find the last node */
	last_node = *head;
	while (last_node->next != NULL)
	last_node = last_node->next;

	/* set the next pointer of the last node to the new node */
	last_node->next = new_node;

	return (new_node);
}
