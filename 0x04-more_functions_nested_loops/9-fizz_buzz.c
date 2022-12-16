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
			printf("%s\n", "Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
}
	return (0);
}
