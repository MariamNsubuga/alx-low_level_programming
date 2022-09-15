#include "main.h"
/*
 * _islower - function checks for lowercase character
 *
 * *
 * @c: this is the int argment of the function
 * Returns: Always 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

