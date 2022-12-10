#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints 0-9 without a newlint to stdout
 * Return: zero (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
