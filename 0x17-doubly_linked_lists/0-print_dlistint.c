#include "lists.h"
/**
 * print_dlistint - the display
 * @h: the only parameter
 *
 * Return: i is the return int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->prev == 0)
	{
		while (h->prev == 0)
		{
			h = h->prev;
		}
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
