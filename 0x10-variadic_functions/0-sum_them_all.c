
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @a: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int a, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, a);

	for (i = 0; i < a; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
