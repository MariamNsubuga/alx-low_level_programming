#include "main.h"
#include <stdio.h>
/**
 * _abs - this is a function that computes absoluet value of integer
 *
 * @c: this is an int argment of the function
 *
 * Return: 0
 *
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
