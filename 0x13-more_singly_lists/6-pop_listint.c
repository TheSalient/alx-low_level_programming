#include "lists.h"

/**
 * pop_listint - the function.
 * @head: The parameter.
 *
 * Return: int value
 */
int pop_listint(listint_t **head)
{
listint_t *the;
int num;

if (!head || !*head)
{
return (0);
}

num = (*head)->n;
the = (*head)->next;
free(*head);
*head = the;

return (num);
}
