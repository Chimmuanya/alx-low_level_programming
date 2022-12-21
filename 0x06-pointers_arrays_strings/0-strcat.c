#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strcat- entry function
 * concatenates two strings.
 * @src: string to be appended.
 * @b: string to be appended to.
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
	/*initialize pointer to *dest and index for *src*/

	char *dptr = dest;
	int i = 0;

	/* move destination pointer to end of string before null*/
	while (*dest != '\0')
		dptr++;

	/* attach src to end of dest */
	while (*src != '\0')
	{
		*dptr = *src;
		src++;
		dptr++;
	}

	/* return pointer to dest */
	return dest;
}
