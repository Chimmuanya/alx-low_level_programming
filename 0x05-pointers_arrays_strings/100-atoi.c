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
	int test[20] = {0};
	int temp_int, j = 0;
	int sum = 0;
	int base = 10;
	int e, res, k, m, n, i = 1;

	while (s[j] != '\0')
	{
		temp_int = s[j];
		if (temp_int >= 48 && temp_int <= 57)
		{
			j++;
			test[0] = temp_int - 48;
			while ((int) s[j] >= 48 && (int) s[j] <= 57)
			{
				test[i] = (int) s[j] - 48;
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
		sum += (test[m] * res);
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
