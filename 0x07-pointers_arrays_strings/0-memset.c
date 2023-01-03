#include "main.h"

/* betty style doc for function main goes there */
/**
 * _memset -entry function
 * fills the first n bytes of the memory area pointed to by s with
 * @b: the constant byte b
 * @s: destination.
 * @n: number of bytes.
 * Return: Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i;
	for(i=0;i<=n+2;i++)
	{
		char *ptr = s + i;
		*ptr=b;
	}
	return s;
}
