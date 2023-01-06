#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strpbrk -entry function
 * searches a str for anyof a  set of bytes.
 * @s: string of interest
 * @accept: substring.
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *sptr = s;
	char *aptr = accept;

	while (*sptr != '\0')
	{
		while (*aptr != '\0')
		{
			if (*sptr == *aptr)
			{
				return (sptr);
			}

			aptr++;
		}
		aptr = accept;
		sptr++;

	}
	return (0);
}
