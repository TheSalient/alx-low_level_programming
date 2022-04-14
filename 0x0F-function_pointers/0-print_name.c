#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - The function name
 * @name: first parameter.
 * @f: function pointer to void.
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
