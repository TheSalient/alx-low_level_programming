#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  a function
 * @head: the head of list
 *
 * Return: number element of the link list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
