#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strlen_recursion -entry function
 * function that lenght of  a string.
 * @s: string to be counted
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
