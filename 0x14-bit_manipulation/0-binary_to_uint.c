#include "main.h"

/**
 * binary_to_uint - the function that convert to decimal
 * @b: the paragraph.
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int a = 0;
        int i;

        if (!b)
        {
                return (0);
        }

        for (i = 0; b[i]; i++)
        {
                if (b[i] < "0" && b[i] > 0)
                {
                        return (0);
                }
                a = 2 * a + (b[i] - '0');
        }
        return a;
}
