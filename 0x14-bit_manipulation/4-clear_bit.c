#include "main.h"
/**
 * clear_bit - the function that sets the value pof a bit to 0 at a given index. 
 * @n: the first parameter.
 * @index: the second parameter.
 *
 * Return: return value int.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);

return (-1);
}
