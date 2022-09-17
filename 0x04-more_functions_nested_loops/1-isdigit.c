#include "main.h"
/**
 * _isdigit - checks if a character is a digit 
 * @a: character used
 * Return: Always (Success)
 */
int _isdigit(int a)
{
	if ((a >=48) && (a <= 57))
	{
		return (1);
	}
	return (0);
}
