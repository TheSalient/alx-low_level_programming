#include "main.h"

/**
 * flip_bits - the function that returns thenumbern of bits you...
 * @n: first parameter.
 * @m: the second parameter.
 *
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int the;
	unsigned long int current = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		the = current >> i;
		if (the & 1)
		{
			count++;
		}
	}
	return (count);
}
