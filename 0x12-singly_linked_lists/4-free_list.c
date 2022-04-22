#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function
 * @head:the first parameter
 */
void free_list(list_t *head)
{
list_t *the;

while (head)
{
the = head->next;
free(head->str);
free(head);
head = the;
}
}
