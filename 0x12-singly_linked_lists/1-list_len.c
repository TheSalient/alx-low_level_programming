#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function.
 * @h: the parameter
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
size_t the = 0;

while (h)
{
the++;
h = h->next;
}
return (the);
}
