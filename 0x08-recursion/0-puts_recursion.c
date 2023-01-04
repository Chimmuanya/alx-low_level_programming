#include "main.h"

/* betty style doc for function main goes there */
/**
 * _puts_recursion -entry function
 * fills the first n bytes of the memory area pointed to by s with
 * @s: string to be printed
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
