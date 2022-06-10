#include "lists.h"
/**
 * insert_dnodeint_at_index - the function name
 * @h: first parameter is a pointer to a pointer.
 * @idx: the second parameter is an unsigned int.
 * @n: another int
 *
 * Return: it returns this, dlistint_t*.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t*temp;

	new = malloc(sizeof(dlistint_t);
	if (!new || !h)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
