#include "lists.h"

/**
 * Get_nodeint_at_index - function.
 * @head: the first parameter.
 * @index: the second parameter.
 *
 * Return: return format is listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *the = head;

while (the && i < index)
{
the = the->next;
i++;
}

return (temp ? temp : NULL);
}
