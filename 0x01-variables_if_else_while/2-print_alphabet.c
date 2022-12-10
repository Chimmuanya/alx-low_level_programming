#include <stdio.h>
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
		putchar(tolower(alphabet));
		alphabet++;
	}
	putchar('\n');

	return (0);
}
