#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a linked list, even if it has a loop.
*
* @head: A pointer to the head of the linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *prev = NULL;
size_t count = 0;

if (head == NULL)
exit(98);

while (current != NULL)
{
count++;
printf("[%p] %d\n", (void *) current, current->n);

/* check for loop */
if (current < prev)
{
printf("-> [%p] %d\n", (void *) current->next, current->next->n);
break;
}

prev = current;
current = current->next;
}

ireturn (count);
}
