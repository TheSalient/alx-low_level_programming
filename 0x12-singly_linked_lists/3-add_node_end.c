#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 * @head: the first parameter.
 * @str: the second parameter.
 *
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *the;
list_t *temp = *head;
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
the->next = NULL;

if (*head == NULL)
{
*head = the;
return (the);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = the;

return (the);
}
