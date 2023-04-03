#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer to the head of the list
* @idx: index of the list where the new node should be added
* @n: data to be added in the new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int i;

/* Check if head is NULL */
if (*head == NULL)
return (NULL);

/* Create a new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* Add the new node at the beginning of the list */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* Traverse the list to the given index */
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;

/* Check if index is out of range */
if (temp == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node at the given index */
new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}

