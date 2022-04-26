#include "lists.h"

/**
 * free_listint - function
 * @head:the first parameter
 */
void free_listint(listint_t *head)
{
listint_t *the;

while (head)
{
the = head->next;
free(head->n);
free(head);
head = the;
}
}
