#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @d: two dimension array to print
 */
void print_chessboard(char (*d)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(d[x][y]);
		}
		_putchar('\n');
	}
}
