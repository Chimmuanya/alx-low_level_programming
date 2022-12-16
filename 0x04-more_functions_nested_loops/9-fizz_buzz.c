#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry function
 * the fizzbuzz quiz.
 * Return: int 1 if success or 0 otherwise
 */
int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i == 100)
			printf("%d\n", 100);
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FIZZBUZZ");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "FIZZ");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "BUZZ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
}
	return (0);
}
