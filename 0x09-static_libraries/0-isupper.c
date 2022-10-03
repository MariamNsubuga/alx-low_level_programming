#include "main.h"
/**
 * _isupper - check the code.
 * @c: chatacter used
 * Return: Always (Success)
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper =1;
			break;
		}
	}
	return (isupper);
}
