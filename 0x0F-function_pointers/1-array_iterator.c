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
    size_t i;

    if (array == NULL || action == NULL)
        return;
        
    for (i = 0; i < c; i++)
        action(array[i]);
}
