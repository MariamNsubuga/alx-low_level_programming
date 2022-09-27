#include "main.h"
/**
 * _memset - fills in the first n bytes of memory 
 * @s: pointer to memory
 * @n: bytes to be filled
 * @c: character to fill the memory
 * Return: pointer to  filled memory area @s.
 */
void *_memset(char *s, char c, unsigned int n)
{
	unsigned int x;

	for (x=0; x<n; x++)
	{
		s[x] = c;
	}
	return (s);
}
