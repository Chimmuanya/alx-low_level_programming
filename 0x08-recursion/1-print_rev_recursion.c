#include "main.h"

/* betty style doc for function main goes there */
/**
 * _print_rev_recursion -entry function
 * function that prints a string in reverse.
 * @s: string to be printed
 * Return: void.
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
}
