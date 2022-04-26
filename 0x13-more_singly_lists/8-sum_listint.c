#include "lists.h"

/**
 * sum_listint - the function name
 * @head: the only parameter
 *
 * Return: the return format is int.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *the = head;

while (the)
{
    sum += the->n;
    the = the->next;
}
return (sum);
}
