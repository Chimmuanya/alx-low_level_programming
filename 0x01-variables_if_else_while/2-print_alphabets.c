#include <stdlib.h>
#include <string.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the alphabet in lowercase
 * Return: zero (success)
 */
int main(void)
{

	int alphabet= 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
