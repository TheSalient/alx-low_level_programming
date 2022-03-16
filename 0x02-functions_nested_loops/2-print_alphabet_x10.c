#include "main.h"
/**
 * print_alphabet_x10 - This is a function
 * Return : Always 0
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int B = 97;
while (B < 123)
{
_putchar(B);
B++;
}
_putchar('\n');
}
}