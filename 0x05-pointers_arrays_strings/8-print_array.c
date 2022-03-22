#include "main.h"
#include <stdio>
/**
 * puts_half - a function that takes a pointer to an int as parameter and
 * @a: chaine of caractere
 * @n: The second parameter
 * Return: 1 or 0
 */
void print_array(int *a, int n)
{
int i = 0;
if (n > 0)
{
while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d", a[i]);
}
printf("\n");
}
