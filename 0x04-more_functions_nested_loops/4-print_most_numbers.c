#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_most_numbers - entry function
 * prints 0-9 to the console, apart from 2 and 4.
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 48;
	int nine = i + 9;

	while (i <= nine)
	{
		if(i != 52 && i != 54)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');

}
