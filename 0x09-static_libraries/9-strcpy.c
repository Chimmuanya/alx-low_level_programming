#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strcpy - entry function
 * copies the string pointed to by src, including the terminating null byte(\0)
 * , to the buffer pointed to by dest
 * @src: source string
 * @dest: destination buffer to be copied to.
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len, index;

	len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	src -= len;
	for (index = 0; index <= len; index++)
		dest[index] = src[index];

	return (dest);
}
