#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strncpy- entry function
 * copies first n characters of a string to dest buffer.
 * @src: string to be copied.
 * @dest: destination buffer.
 * @n: number of chars of src to be copied.
 * Return:pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dptr = dest;

	for (; n != 0 && *src != '\0'; src++, n--)
	{
		*dptr = *src;
		dptr++;
	}

	for (; n != 0 && *dptr != '\0'; n--)
	{

		*dptr = '\0';
		dptr++;
	}

	return (dest);
}
