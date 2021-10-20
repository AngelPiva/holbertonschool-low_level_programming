#include "main.h"

/**
*print_chessboard - prints the chessboard
*@a: pointer to chess board
*/

void print_chessboard(char (*a)[8])
{
	int c, n;

	for (c = 0; c < 8; c++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[c][n]);
		}
		_putchar('\n');
	}
}
