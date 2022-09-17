#include <stdio.h>

/**
 * main - prints mumbers
 * return: always 0
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
