#include <stdio.h>
/**
 * main - program entry point
 *
 * return : 0 on success. Error code otherwise
 */
int main(void)
{
char a = 'a';
int b = 0;
/*your code goes here*/
while (b < 26)
{
	putchar(a);
	a++;
	b++;
}
putchar('\n');
return (0);
}
