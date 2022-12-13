#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_alphabet - function to print alphabet using _putchar
 * prints lowercase alphabets to stdout followed by a newline.
 * Return: void
 */
void print_alphabet(void)
{
	int start = 97;

	int end = start + 25;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');

	return;
}
