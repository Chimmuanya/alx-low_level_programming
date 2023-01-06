#include "main.h"
#include <stdio.h>
#include <unistd.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints the number of arguments passed to it to stdout
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = argc;
	/* char cwd[256]; */
	/* char mod_fn; */

	/* if (i) */
	/* getcwd(cwd, sizeof(cwd)); */
	if (argv[0])
		printf("%d\n", i - 1);
	return (0);
}
