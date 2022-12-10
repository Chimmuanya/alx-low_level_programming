#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the alphabets in lowercase except q and e followed by a newline.
 * Return: zero (success)
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{

		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;

	}
	putchar('\n');

	return (0);
}
