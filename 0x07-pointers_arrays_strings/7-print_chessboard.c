#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: pointer
 *
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int aLen = sizeof(*a) / sizeof(*a[0]);

	for (i = 0; i < aLen; i++)
	{
		for (j = 0; j < aLen; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
