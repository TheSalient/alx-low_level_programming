#include <stdio.h>

/**
* main - This comment is for the main function
*
* Return: Always 0 (success)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %zu byte(s)\n", sizeof(d));
printf("size of an int: %zu byte(s)\n", sizeof(a));
printf("size of a long int: %zu byte(s)\n", sizeof(b));
printf("size of a long long int: %zu byte(s)\n", sizeof(c));
printf("size of a float: %zu byte(s)\n", sizeof(f));
return (0);
};
