#include <string.h>
#include "main.h"

/**
 * print_chessboard - copies memory area
 * @a: pointer to memory to set
 * Return: pointer to dest which golds concatenated string
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(a[i] + j));
		}
		_putchar('\n');
	}
}
