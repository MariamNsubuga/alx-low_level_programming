#include "main.h"
/**
 * _strlen - returns lenght of string
 * @s: string
 * Retrun: returns length as integer;
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
