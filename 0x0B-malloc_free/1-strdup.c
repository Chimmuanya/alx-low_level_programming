#include "main.h"
#include <stdlib.h>

/**
 * _strdup-a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: a pointer to a newly allocated space in memory or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i = 0;
	unsigned int l = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	p = str;

	/* get str length */
	while (*p != '\0')
	{
		l++;
		p++;
	}


	cpy = malloc(sizeof(char) * l);

	if (cpy == NULL)
		return (NULL);
	/* copy str to cpy */
	while (i < l)
	{
		*(cpy + i) = *(str + i);
		i++;
	}
	return (cpy);
}
