#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strlen - entry function
 * calculate the length of a string using only pointers
 * @s: string to be counted.
 * Return: int (length of str)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
