#include "main.h"

/* betty style doc for function main goes there */
/**
 * _memcpy -entry function
 * copies n bytes from memory area src to memory area dest
 * @src: source address
 * @dest: destination pointer/address.
 * @n: number of bytes.
 * Return: Returns a pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sptr, *dptr;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		sptr = src;
		dptr = dest;

		*(dptr + i) = *(sptr+i);
		sptr++;
		dptr++;

	}
	return dest;

}
