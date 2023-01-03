#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strspn -entry function
 * gets the length of a prefix substring.
 * @s: string of interest
 * @accept: substring.
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *sptr = s;
	char *aptr = accept;

	while (*sptr != '\0')
	{

		while (*aptr != '\0')
		{
			if (*sptr == *aptr)
			{
				count++;
				aptr = accept;
				break;
			}
			aptr++;
		}
		sptr++;
	}
	return (count);
}
