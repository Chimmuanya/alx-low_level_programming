#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strcmp- entry function
 * compare 2 strings.
 * @s1: first string to be compared against.
 * @s2: second string to compare.
 * Return:int -positive, neg, or zero.
 */
int _strcmp(char *s1, char *s2)
{
	char *fptr = s1;
	char *sptr = s2;

	if (*fptr != *sptr)
	{
		return ((int) (*fptr - *sptr));
	}

	return (0);
}
