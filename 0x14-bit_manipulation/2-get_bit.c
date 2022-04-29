#include "main.h"

/**
 * Get_bit - the function.
 * @n: the first parameter.
 * @index: the second parameter.
 *
 * Return: int value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
{
return (-1);
}
bit_val = (n >> index) & 1;

return (bit_val);
}
