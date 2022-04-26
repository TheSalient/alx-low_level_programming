#include "lists.h"

/**
 * listint_len - function.
 * @h: the parameter
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t the = 0;

while (h)
{
the++;
h = h->next;
}
return (the);
}
