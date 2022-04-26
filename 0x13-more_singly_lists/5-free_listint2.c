#include "lists.h"

/**
 * free_listint2 - functions
 * @head: the parameter
 */
void free_listint2(listint_t **head)
{
listint_t *the;

if (head == NULL)
{
return;
}

while (*head)
{
the = (*head)->next;
free(*head);
*head = the;
}

*head = NULL;
}
