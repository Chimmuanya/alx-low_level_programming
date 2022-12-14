#include "main.h"
#include <stdio.h>


/**
 *print_to_98 - print from n to 98
 * printf integers from n to 98
 * @n: starting integer
 * prints nine times in a table.
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
                {
                        printf("%d, ", n);
                        n--;
                }
	}

	printf("%d\n", 98);
}
