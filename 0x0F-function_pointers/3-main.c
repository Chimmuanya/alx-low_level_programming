#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * @argc: total number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 (success) always
 */
int main(int argc, char *argv[])
{
	int a;
	int c;
	char *b;
	int (*op_ptr)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	c = atoi(argv[3]);
	b = argv[2];

	if (c == 0 && (*b == '/' || *b == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	op_ptr = get_op_func(b);


	if (op_ptr)
	{
		result = op_ptr(a, c);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
