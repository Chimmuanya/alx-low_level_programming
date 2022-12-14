#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -program entry point
 * prints the sum of all multiples of 3 or 5 to stdout.
 * Return: zero (success)
 */
int main(void)
{
	int n = 1;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
