#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strncat- entry function
 * concatenates two strings up to n chars of src str.
 * @src: string to be appended.
 * @dest: string to be appended to.
 * @n: number of chars of src to be copied.
 * Return:pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*initialize pointer to *dest, src and dest len*/

	char *dptr = dest;
	int len_d = 0;
	int len_s = 0;
	int counter = 0;

	/* move destination pointer to end of string before null*/
	while (*dest != '\0')
	{
		dptr++;
		dest++;
		len_d++;
	}

	/* attach src up to n chars to end of dest */
	while (*src != '\0' && counter < n)
	{
		*dptr = *src;
		src++;
		dptr++;
		len_s++;
		counter++;
	}

	/* return pointer to dest */
	return (dptr - (len_d + len_s));
}
