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
int p;
if (argc == 3)
{
p = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", p);
}
else
{
printf("Error");
}
return (0);
}
