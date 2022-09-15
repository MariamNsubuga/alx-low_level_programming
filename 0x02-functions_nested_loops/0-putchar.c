#include "main.h"

/**
 * prints _putchar as a message
 *
 * return: always 0 (success)
 */

int main(void)
{
	int str[] = { 1, 2, 3, 4, 500, 6, 7, 8, 9};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
