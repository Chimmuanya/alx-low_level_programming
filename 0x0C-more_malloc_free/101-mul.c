#include "main.h"
#include <stdlib.h>



/**
 * _strcpy - entry function
 * copies the string pointed to by src, including the terminating null byte(\0)
 * , to the buffer pointed to by dest
 * @src: source string
 * @dest: destination buffer to be copied to.
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	long len, index;

	len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	src -= len;
	for (index = 0; index <= len; index++)
		dest[index] = src[index];

	return (dest);
}




/**
 * p_str -print str using puts followed by newline
 * @str: char array of interest
 * Return: void
 */
void p_str(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));
	_putchar('\n');
}

/**
 * str_mul - function that multiplies long numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @l: len of n1
 * @m: len of n2
 * @rev: buffer to store result in reverse
 * @res: result buffer
 * Return: void;
 */


void str_mul(char *n1, char *n2, int *rev, char *res, int l, int m)
{
	int i_n2, i_n1 = 0;
	int i, j, carry, x, y, sum, k = 0;
	char p;

	for (i = l - 1; i >= 0; i--)
	{
		carry = 0;
		x = n1[i] - '0';
		i_n2 = 0;
		for (j = m - 1; j >= 0; j--)
		{
			y = n2[j] - '0';
			sum = x * y + rev[i_n1 + i_n2] + carry;
			carry = sum / 10;
			rev[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			rev[i_n1 + i_n2] += carry;
		i_n1++;

	}
	i = l + m;

	while (i >= 0 && rev[i] == 0)
		i--;

	while (i >= 0)
	{
		p = rev[i--] + '0';
		res[k] = p;
		k++;
	}

	free(rev);
}

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints the product of 2 integers despite len.
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *n1 = malloc(1000000 * sizeof(argv[1]));
	char *n2 = malloc(10000000 * sizeof(argv[2]));
	int l, m;
	char *res;
	int *rev;
	char *err = "Error";

	if (*argv[1] == '0' || *argv[2] == '0')
	{
		p_str("0");
		return (0);
	}

	if (argc != 3)
	{
		p_str(err);
		exit(98);
	}
	n1 = _strcpy(n1, argv[1]);
	n2 = _strcpy(n2, argv[2]);

	for (l = 0; *(n1 + l); l++)
	{
		if (!(*(n1 + l) >= 48 && *(n1 + l) <= 57))
		{
			p_str(err);
			exit(98);
		}
	}
	for (m = 0; *(n2 + m); m++)
	{
		if (!(*(n2 + m) >= 48 && *(n2 + m) <= 57))
		{
			p_str(err);
			exit(98);
		}
	}
	rev = calloc((l + m * 1000000), sizeof(int));
	res = malloc((l + m) * sizeof(char) * 1000000);
	if (!rev || !res)
		exit(98);
	str_mul(n1, n2, rev, res, l, m);

	p_str(res);
	return (0);
}
