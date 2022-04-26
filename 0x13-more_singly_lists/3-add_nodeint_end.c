#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: the first parameter.
 * @n: the second parameter.
 *
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
list_t *the;
list_t *temp = *head;
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
the->next = NULL;

if (*head == NULL)
{
*head = the;
return (the);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = the;

return (the);
}
