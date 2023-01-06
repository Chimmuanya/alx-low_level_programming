#include "main.h"
#include <stdio.h>
#include <unistd.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints the arguments passed to it to stdout separated by newline.
 * @argc: number of arguments.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	/* char cwd[256]; */
	/* char mod_fn; */

        for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
