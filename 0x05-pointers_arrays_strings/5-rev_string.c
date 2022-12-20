#include "main.h"

/* betty style doc for function main goes there */
/**
 * rev_string - reverse a string
 * @s: string to be reversed.
 * Return: void
 */
void rev_string(char *s)
{
	int str_len;
	int end;
	int index;
	char start;

	str_len = 0;

	while (s[str_len] != 0)
		str_len++;

	str_len--;

	for (index = 0; index <= (str_len / 2); index++)
	{
		start = s[index];
		end = s[str_len - index];
		s[index] = end;
		s[str_len - index] = start;
	}
}
