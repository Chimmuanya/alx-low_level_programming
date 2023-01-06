#include "main.h"

/**
 * get_str_len -function to determine str length
 * @my_str: string of interest
 * Return: int (string length).
 */



int get_str_len(char *my_str)
{
	if (*my_str == '\0')
		return (0);

	return (1 + get_str_len(my_str + 1));
}


/**
 * pali_helper -function to determine if a string is a palindrome
 * @my_str: string of interest.
 * @l: start of string, always 0
 * @r: length of string.
 * Return: int (1 if true, 0 if false.
 */



int pali_helper(char *my_str, int l, int r)
{
	if (l < 0 || r < 0)
		return (0);

	if (l >= r)
		return (1);

	if (*(my_str + l) == *(my_str + r - 1))
		return (pali_helper(my_str, l + 1, r - 1));

	return (0);
}


/**
 * is_palindrome -wrapper function to bypass restrictions
 * @s: string of interest
 * Return: int (return value of pali_helper), 1 if a palindrome .
 */



int is_palindrome(char *s)
{
	int len = get_str_len(s);

	return (pali_helper(s, 0, len));
}
