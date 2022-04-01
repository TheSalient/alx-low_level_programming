#include "main.h"
#include <stdio.h>
/**
* main - function
*
* @argc: the chaine
*@argv: another parameter
* Return: Always 0.
*/
int main(int argc, int **argv)
{
if (argc >= 2)
{
int i;
int p = 0;
for (i = 1; i < argc; i++)
{
if (argv[i] == 0 && argv[i] <= 9)
{
p += argv[i];
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", p);
}
}
else if (argc == 1)
{
printf("0\n");
}
{
printf("Error");
}
return (0);
}
