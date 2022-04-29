#include "main.h"

/**
 * get_endianness - function object.
 *
 * Return: return value int.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *the = (char *) &i;

	return (*the);
}
