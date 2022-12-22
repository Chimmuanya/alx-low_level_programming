#include "main.h"

/* betty style doc for function main goes there */
/**
 * cap_string- entry function
 * Capitalize after word seperators like:
 * space, tabulation, newline, ,, ;, ., !, ?, ", (, ), {, and }
 * @s: string to be processed.
 * Return: capitalized str .
 */
char *cap_string(char *s)
{
	char *seps = ",;.!?\"(){} \n\t";
	int j, n;


	for (j = 0; *(s + j) != '\0'; j++)
	{

		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			for (n = 0 ; *(seps + n) != '\0'; n++)
			{
				if (*(s + j - 1) == *(seps + n))
				{
					*(s + j) -= 32;
					break;
				}
				else if (j == 0)
				{
					*(s + j) -= 32;
					break;
				}
			}

		}

	}
	return (s);
}
