#include "main.h"

/* betty style doc for function main goes there */
/**
 * leet- replace some chars with numbers
 * @s: string to be processed.
 * Return: processed str .
 */
char *leet(char *s)
{
	char base[] = "aAeEoOtTlL";
	char code[] = "4433007711";
	int i,j;

	for (i = 0; *(s + i) != '\0'; i++)
	{

		for (j = 0; base[j]; j++)
		{
			if (base[j] == *(s + i))
			{
				*(s + i) = code[j];
			}
		}

	}
	return (s);
}
