#include <stdlib.h>
#include "main.h"


/**
 * concat -a function that concatenates two strings.,
 * @s1: string to be concatenated unto.
 * @s2: string to be concatenated into.
 * @res: buffer
 * @m: s1 length
 * @l: s2 length
 * Return: void;
 */
void concat(char *s1, char *s2, char *res, unsigned int l, unsigned int m)
{
	unsigned int index = 0;
	unsigned int j = 0;
	char empty[] = {""};

	while (index < l)
	{
		if (s1 != NULL)
		{
			*(res + index) = *(s1 + index);
			index++;
		}
		else
		{
			*res = *empty;
			break;
		}
	}
	while (index <= m + l)
	{
		if (s2 != NULL)
		{
			*(res + index) = *(s2 + j);
			index++;
			j++;
		}
		else
		{
			*(res + index) = *empty;
			break;
		}
	}
	*(res + index) = '\0';
}









/**
 * str_concat -a function that concatenates two strings.,
 * @s1: string to be concatenated unto.
 * @s2: string to be concatenated into.
 * Return: a pointer that points to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l = 0;
	unsigned int m = 0;
	char *res;
	char empty[] = {""};
	char *p1;
	char *p2;

	/* manage NULL situations of s1 and s2 */
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		p1 = empty;
	else
	{
		p1 = s1;
	}

	if (s2 == NULL)
		p2 = empty;
	else
	{
		p2 = s2;
	}
	/* find len of s1 and s2 */
	while (*p1 != '\0')
	{
		l++;
		p1++;
	}

	while (*p2 != '\0')
	{
		m++;
		p2++;
	}
	/* create memory for new char array */
	res = malloc(sizeof(char) * l + sizeof(char) * m + 1);
	/* create concatenated str */
	concat(s1, s2, res, l, m);
	return (res);
}
