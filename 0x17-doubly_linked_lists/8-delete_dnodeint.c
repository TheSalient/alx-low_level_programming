#include "lists.h"

/**
 * dlistint_len - the function.
 * @h: the only parameter.
 *
 * Return: size_t is returned.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

/**
 * delete_dnodeint_at_index - the function.
 * @head: a pointer to a pointer.
 * @index: an unsigned int is the second parameter.
 *
 * Return: returns int as the output.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
	{
		return (-1);
	}

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->prev;
	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
