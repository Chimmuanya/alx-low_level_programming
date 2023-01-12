#include <stdlib.h>
#include "main.h"

/**
 * concat -a function that concatenates two strings.,
 * @s1: string to be concatenated unto.
 * @s2: string to be concatenated into.
 * @res: buffer
 * @m: s1 length
 * @n: 1st n bytes of s2
 * @l: s2 length
 * Return: void;
 */
void concat(char *s1, char *s2, char *res, unsigned int l, unsigned int m,
	    unsigned int n)
{
	unsigned int index = 0;
	unsigned int j = 0;
	char empty[] = {""};
	/**
	 * If n is greater or equal to the length of s2
	 * then use the entire string s2
	 */

	if (m > n)
		m = n - 1;


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
 * string_nconcat -a function that concatenates two strings (s1 +
 * 1st n bytes of s2).
 * @s1: string to be concatenated unto.
 * @s2: string to be concatenated into.
 * @n: 1st n bytes of s2
 * Return: a pointer that points to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = 0;
	unsigned int m = 0;
	char *res;
	char empty[] = {""};
	char *p1;
	char *p2;

	/* manage NULL situations of s1 and s2 */
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
	if (res == NULL)
		return (NULL);
	/* create concatenated str */
	concat(s1, s2, res, l, m, n);
	return (res);
}
