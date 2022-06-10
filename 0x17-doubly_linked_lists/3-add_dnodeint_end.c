#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  a function
 * @head: the head of list
 * @n: the number of noeud
 *
 * Return: the node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
