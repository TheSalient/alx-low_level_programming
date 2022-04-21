#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function.
 * @head: the first argument.
 * @str: the second argument.
 *
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *the;
unsigned int len = 0;

while (str[len])
{
len++;
}

the = malloc(sizeof(list_t));
if (!the)
{
return (NULL);
}
the->str = strdup(str);
the->len = len;
the->next = (*head);
(*head) = the;

return (*head);
}
