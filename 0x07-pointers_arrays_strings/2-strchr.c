#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strchr -entry function
 * locates a character in a string.
 * @s: string of interest
 * @c: character.
 * Return: pointer to the first occurrence of the character c in the string s
 * , or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
