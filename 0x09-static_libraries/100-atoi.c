#include "main.h"
#include <stdio.h>

/**
 * _atoi - entry function
 * function that converts a string to an integer.
 *  @s: source string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int j = 0;
	int sum = 0;
	int base = 10;
	int e, res, k, m, n, i = 1;

	while (s[j] != '\0')
	{
		if (s[j] >= 48 && s[j] <= 57)
		{
			j++;
			s[0] = s[j] - 48;
			while ((int) s[j] >= 48 && (int) s[j] <= 57)
			{
				s[i] = s[j] - 48;
				i++;
				j++;
			}
			n = j - 1;
			break;
		}
		j++;
	}
	m = 0;
	while (m < i)
	{
		res = 1;
		e = i - m - 1;
		for (k = 0; k < e; k++)
			res = res * base;
		sum += ((int) s[m] * res);
		m++;
	}
	while (*s != '\0' && n >= 0)
	{
		if ((int) *s == 45)
			sum = sum * -1;
		s++;
		n--;
	}
	return (sum);
}
