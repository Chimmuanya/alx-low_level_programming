#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_alphabet - function to print alphabet using _putchar
 * prints lowercase alphabets to stdout in 10 lines followed by a newline.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i  = 0;

	while (i < 10)
	{
		int start = 97;
		int end = start + 25;

		while (start <= end)
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');

	}

	
}
