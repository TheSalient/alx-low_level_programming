#include "lists.h"
/**
 * sum_dlistint - the function
 * @head: the first parameter.
 *
 * Return: this will return an int.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
