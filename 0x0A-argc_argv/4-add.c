#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int check_digits(char *s);


/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints the sum of any number of integers.
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int temp;



	while (i < argc)
	{
		if (check_digits(argv[i]) != -1)
		{
			temp = atoi(argv[i]);
			sum += temp;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}



	printf("%d\n", sum);

	return (0);
}


/**
 * check_digits -entry function
 * checks string for non-digit chars.
 * @s: pointer to string.
 * Return: 1 (valid digit) or -1 (invalid digit)
 */

int check_digits(char *s)
{
	char *ptr = s + 1;
	int n = -1;

	if (*s == '-' || (*s > 47 && *s < 58))
		n = 1;
	else
	{
		n = -1;
		return (n);
	}

	while (*ptr != '\0')
	{
		n = -1;
		if (*ptr <= 57 && *ptr >= 48)
			n = 1;
		else
		{
			n = -1;
			return (n);
		}
		ptr++;
	}

	return (n);
}
