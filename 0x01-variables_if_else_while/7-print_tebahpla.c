#include <stdio.c>
/*the main code*/
int main(void)
{
char a = 'z';
/*where declaration ends*/
while (a >= 'a')
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
