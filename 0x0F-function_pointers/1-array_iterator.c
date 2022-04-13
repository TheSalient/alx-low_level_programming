#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - the function.
 * @array: The array
 * @size: The size of the array.
 * @void: The function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i, c;
    c = size;
    for (i = 0; i < c; i++)
        action(array[i]);
}
