#include "main.h"

/* betty style doc for function main goes there */
/**
 * leet- replace some chars with numbers
 * @s: string to be processed.
 * Return: processed str .
 */
char *leet(char *s)
{
	char *base = "aAeEoOtTlL";
	char *code = "4433007711";
	int j;

	for (; *s != '\0'; s++)
	{

		for (j = 0; j < 10; j++)
		{
			if (*(base + j) == *s)
			{
				*s = *(code + j);
			}
		}

	}
	return (s);
}
