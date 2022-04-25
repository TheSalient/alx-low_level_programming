#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - the function that prints
 * @h: The parameter
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
size_t the = 0;

while (h)
{
if (!h->n)
{
printf("[0] (nil)\n");
}
else
{
printf("%lu\n", h->n);
}
h = h->next;
the++;
}

return (the);
}
