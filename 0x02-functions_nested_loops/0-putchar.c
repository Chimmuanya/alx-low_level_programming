#include "main.h"

/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints _putchar to stdout followed by a newline.
 * Return: zero (success)
 */
int main(void)
{
	int put_char[7] = {95, 112, 117, 116, 99, 97, 114};

	int len = sizeof(put_char);

	int i = 0

	while (i < len)
	{
		_putchar(put_char[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
