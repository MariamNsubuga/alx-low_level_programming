#include "main.h"
/**
 * print_sign - this is a function that checks for a sign of number
 *
 * @n: this is the int argument of the function
 *
 * Return: 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
