#include "main.h"
#define HASH 35

/* betty style doc for function main goes there */
/**
 * print_square - entry function
 * prints n squared hashs to the console
 * @size: number of '#'s to be printed per side.
 * Return: void
 */
void print_square(int size)
{
	int x = size;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (x > 0)
	{
		y = size;

		while (y > 0)
		{
			_putchar(HASH);
			y--;
		}
		_putchar('\n');
		x--;
	}
}
