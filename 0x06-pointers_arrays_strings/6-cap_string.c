#include "main.h"

/* betty style doc for function main goes there */
/**
 * cap_string- entry function
 * Capitalize after word seperators like:
 * space, tabulation, newline, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: string to be processed.
 * Return: capitalized str .
 */
char *cap_string(char *str)
{
	char a = 97;
	char *a_ptr = str;
	char *seps = ",;.!?\"(){} \t\n\0";
	int j = 1;
	int n;


	while (*(a_ptr + j) != '\0')
	{

		for (n = 0 ; *(seps + n) != '\0'; n++)
		{
			if (*a_ptr == *(seps + n) && (*(a_ptr + j) >= a &&
						      *(a_ptr + j) <= (a + 25)))
			{
				*(a_ptr + j) -= 32;
			}
		}
		a_ptr++;
	}
	return (str);
}
