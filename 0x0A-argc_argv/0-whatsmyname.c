#include "main.h"
#include <stdio.h>
#include <unistd.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints its name to stdout
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = argc;
	char cwd[256];
	/* char mod_fn; */

	if (i)
		getcwd(cwd, sizeof(cwd));

	printf("%s%s\n", cwd, (argv[0] + 1));
	return (0);
}
