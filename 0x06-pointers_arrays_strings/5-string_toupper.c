#include "main.h"

/* betty style doc for function main goes there */
/**
 * string_toupper- entry function
 * convert all lowercase chars in a string to uppercase.
 * @str: string to be processed.
 * Return: uppercase str .
 */
char *string_toupper(char *str)
{
	char a = 97;
	char *a_ptr = str;

	while (*a_ptr != '\0')
	{
		if (*a_ptr >= a && *a_ptr <= (a + 25))
			*a_ptr -= 32;
		a_ptr++;
	}
	return (str);
}
