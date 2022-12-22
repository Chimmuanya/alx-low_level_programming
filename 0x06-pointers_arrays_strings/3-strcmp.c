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
	int diff2 = *(fptr) - *(sptr);
	int diff = 0;

	for (; *fptr != '\0' && *sptr != '\0'; fptr++, sptr++)
	{
		diff += (*fptr - *sptr);
	}

	for (; *fptr != '\0'; fptr++)
	{
		diff += *fptr;
	}

	for (; *sptr != '\0'; sptr++)
	{
		diff -= *sptr;
	}

	if (diff != 0)
		return (diff2);

	return (diff);
}
