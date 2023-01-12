#include <stdlib.h>
#include "main.h"



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
	unsigned int l, m;
	char *res;
	unsigned int i;

	/* manage NULL situations of s1 and s2 */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* find len of s1 and s2 */
	for (l = 0; *(s1 + l); l++)
		;
	for (m = 0; *(s2 + m); m++)
		;
	/* conditional for n bytes */
	if (m > n)
		m = n;
	/* create memory for new char array */
	res = malloc(sizeof(char) * (l + m + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < (l + m); i++)
	{
		if (i < l)
			*(res + i) = *(s1 + i);
		else
			*(res + i) = *(s2 + i - l);
	}
	/* end with null char */
	*(res + i) = '\0';
	return (res);
}
