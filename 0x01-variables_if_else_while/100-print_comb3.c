#include <stdio.h>
/**
 * main - prints numbers
 * Return: Always (Success)
 */
int main(void)
{
	int a, m;

	for (a = '0'; a <= '9'; a++)
	{
		for ( m = '0'; m <= '9'; m++)
		{
			if (a < m)
			{
				putchar(a);
				putchar(m);
				if (a != '8' || (a =='8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
		
