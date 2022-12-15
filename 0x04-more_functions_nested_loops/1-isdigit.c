#include "main.h"

/* betty style doc for function main goes there */
/**
 * _isupper - entry function
 * check if char int is lowercase or not.
 * @c: char to be checked.
 * Return: int 1 if success or 0 otherwise
 */
int _isdigit(int c)
{
	int first = 48;
	int last = first + 9;

	c = (int) c;

	if (c < first || c > last)
	{
		return (0);
	}

	return (1);

}
