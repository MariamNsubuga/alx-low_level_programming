#include <stdio.h>
/**
 *
 * main - prints the number since 0 to 9
 *
 * return: always (Success)
 */
int main(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

