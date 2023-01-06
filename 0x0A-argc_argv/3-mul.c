#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints the product of 2 integers.
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;
	int m;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}



	n = atoi(argv[1]);
	m = atoi(argv[2]);
	/* char cwd[256]; */
	/* char mod_fn; */

	printf("%d\n", m * n);

	return (0);
}
