#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
		putchar(*(s + length));
	putchar(10);
}
