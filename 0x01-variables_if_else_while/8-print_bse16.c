#include <stdio.h>
/**
 * main - prints hexadecial
 * Return: Always (Success)
 */
int main(void)
{
	char a;
	
	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'c'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
