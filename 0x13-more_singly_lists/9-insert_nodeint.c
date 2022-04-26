#include "list.h"

/**
 * insert_nodeint_at_index - the function name
 * @head: the first parameter
 * @idx: the second paramter
 * @n: the third parameter
 * 
 * Return: the return value listint_t* 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *the = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; the && i < idx; i++)
{
if (i == idx - 1)
{
new->next = the->next;
the->next = new;
return (new);
}
else
{
the = the->next;
}
}
return (NULL);
}
