#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at index index of a linked list
* @head: pointer to a pointer to the first node in the linked list
* @index: index of the node to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *current;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = (*head)->next;
free(current);
return (1);
}

prev = *head;
current = (*head)->next;
for (i = 1; current != NULL; i++)
{
if (i == index)
{
prev->next = current->next;
free(current);
return (1);
}
prev = current;
current = current->next;
}

return (-1);
}

