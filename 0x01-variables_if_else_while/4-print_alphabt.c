#include <stdio.h>
/**
 * main- content
 * return 0 when success else error
 *
 */
int main(void)
{
	 char ch = 'a';
	 /*main code*/
while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
