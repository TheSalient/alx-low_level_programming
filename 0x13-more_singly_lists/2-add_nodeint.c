#include "lists.h"

/**
 * add_nodeint - function.
 * @head: the first argument.
 * @n: the second argument.
 *
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
list_t *the;
unsigned int len = 0;

while (n[len])
{
len++;
}

the = malloc(sizeof(list_t));
if (!the)
{
return (NULL);
}
the->n = strdup(n);
the->len = len;
the->next = (*head);
(*head) = the;

return (*head);
}
