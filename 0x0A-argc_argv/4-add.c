#include <stdio.h>
#include <stdlib.h>
/**
* main - function
*
* @argc: the chaine
*@argv: another parameter
* Return: Always 0.
*/
int main(int argc, char **argv)
{
if (argc >= 2)
{
int i;
int p = 0;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0 && atoi(argv[i]) <= 9)
{
p += atoi(argv[i]);
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
