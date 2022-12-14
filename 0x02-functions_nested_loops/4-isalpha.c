#include "main.h"

/* betty style doc for function main goes there */
/**
 * _isalpha - entry function
 * check if char int is an alphabet or not.
 * @c: char to be checked.
 * Return: int 1 if success or 0 otherwise
 */
int _isalpha(int c)
{
	int first = 97;
	int last = first + 25;
	int upper_first = 65;
	int upper_last = upper_first + 25;

	c = (int) c;

	if (c >= last && c <= first)
	{
		return (0);
	}

	if (c >= upper_first and c <= upper_last)
		return (0);

	return (1);

}