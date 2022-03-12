#include <stdio.h>
/**
 * main- content
 * return 0 when success else error
 *
 */
int main(void)
{
	 for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
