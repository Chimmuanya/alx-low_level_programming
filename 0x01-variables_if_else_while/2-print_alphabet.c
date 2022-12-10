#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the alphabet in lowercase followed by a newline.
 * Return: zero (success)
 */
int main(void)
{
	int alphabet = 'A';

	while (alphabet <= 'Z')
	{
		int lower_alpha = tolower(alphabet);

		putchar(lower_alpha));
		alphabet++;
	}
	putchar('\n');

	return (0);
}
