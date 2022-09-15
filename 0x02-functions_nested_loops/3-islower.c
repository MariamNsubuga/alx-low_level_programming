#include "main.h"
/*
 *_islower - checks for lowercase character
 *
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

