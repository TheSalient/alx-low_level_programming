#include "lists.h"

/**
 * delete_nodeint_at_index - the function name
 * @head: the first parameter.
 * @index: the second parameter.
 *
 * Return: the return value format is int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *the = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(the);
return (-1);
}

while (i < index - 1)
{
if (!the || !(the->next))
{
return (-1);
}
the = the->next;
i++;
}
current = the->next;
the->next = current->next;
free(current);

return (1);
}
