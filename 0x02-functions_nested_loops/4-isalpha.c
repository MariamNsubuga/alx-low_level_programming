#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or upercse
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
