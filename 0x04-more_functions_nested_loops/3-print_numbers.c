#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_numbers - entry function
 * prints 0-9 to the console.
 * Return: void
 */
void print_numbers(void)
{
	int i = 48;
	int nine = i + 9;

	while (i <= nine)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
