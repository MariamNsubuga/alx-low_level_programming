#include <stdio.h>

/**
 * main - prints mumbers
 * return: Always (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
