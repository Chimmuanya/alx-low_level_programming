#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the base 16 characters to stdout
 * Return: zero (success)
 */
int main(void)
{
	int n = 48;

	/*print 0 to 9 to stdout*/
	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	/*print a to f to stdout*/
	n = 97;
	while (n <= 102)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
