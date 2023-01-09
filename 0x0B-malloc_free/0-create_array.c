#include "main.h"

/**
 * create_array -function that
 * creates an array of chars, and initializes it with a specific char.
 * @c: char for initializing arrray.
 * @size: size of array of chars
 * Return: pointer to array or NULL if size = 0;
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc((sizeof(char)) * size);
	char *ptr = str;
	int counter = 0;

	if (size == 0)
		return ('\0');

	while (counter < size)
	{
		*(ptr + counter) = c;
		counter++;
	}

	return (str);
}
