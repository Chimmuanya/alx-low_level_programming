#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strcat- entry function
 * concatenates two strings.
 * @src: string to be appended.
 * @dest: string to be appended to.
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
	/*initialize pointer to *dest*/

	char *dptr = dest;
	int len_d = 0;
	int len_s = 0;

	/* move destination pointer to end of string before null*/
	while (*dest != '\0')
	{
		dptr++;
		dest++;
		len_d++;
	}

	/* attach src to end of dest */
	while (*src != '\0')
	{
		*dptr = *src;
		src++;
		dptr++;
		len_s++;
	}

	/* return pointer to dest */
	return (dptr - (len_d + len_s));
}
