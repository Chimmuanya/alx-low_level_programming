#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -entry function
 * prints its name to stdout
 * @argc: -number of arguments passed to main.
 * @argv: -array of strings: arguments passed to main.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
