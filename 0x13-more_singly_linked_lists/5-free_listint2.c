#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: pointer to the head of the list to be freed
*
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp_node;

while (*head != NULL)
{
temp_node = *head;
*head = (*head)->next;
free(temp_node);
}

*head = NULL;
}
