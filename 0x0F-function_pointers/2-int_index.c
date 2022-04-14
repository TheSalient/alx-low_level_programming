#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - The function.
 * @array: the first parameter
 * @size: the second parameter
 * @cmp: the callback function
 *
 * Return: -1 if false, something else otherwise
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
size_t i;

if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
