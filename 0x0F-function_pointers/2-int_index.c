#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - The function. 
 * 
 * @param array: the first parameter
 * @param size: the second parameter
 * @param cmp: the callback function 
 * @return int 
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
    size_t i;

    if (size <= 0 || array == NULL || cmp == NULL)
        return (-1); 
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}
