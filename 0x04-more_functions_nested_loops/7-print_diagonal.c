#include "main.h"
#define SPACE 32
#define F_SLASH 92

/* betty style doc for function main goes there */
/**
 * print_diagonal - entry function
 * prints diagonal line of n '/'s to the console
 * @n: number of '/'s and spaces to be printed.
 * Return: void
 */
void print_diagonal(int n)
{

	int line_count = 0;
	int space_count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (line_count <= n)
	{
		space_count = line_count -1;
		while (space_count >= 0) {
			_putchar(SPACE);

			if (space_count == 0) {
				_putchar(F_SLASH);
				_putchar('\n');
			}
			space_count--;
		}
		line_count++;
	}
}
