#include <stdio.h>
/*main code*/
int main(void)
{
int i = 0;
/*where the while loop is*/
while (i <= 9)
{
	putchar(i + '0');
	i++;
}
putchar('\n');
return (0);
}
