#include "main.h"

/* betty style doc for function main goes there */

char *make_buffer(char *);
void close_f(int);

/**
  * main -entry function
  * @argc: number of arguments
  * @argv: array of pointers to argument array
  * Return: intege
  */
int main(int argc, char **argv)
{
	char *file_from, *file_to, *buffer;
	int from, to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	buffer = make_buffer(file_to);

	from = open(file_from, O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from %s\n", file_from);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO,
				 "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(file_to, O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_f(from);
	close_f(to);
	return (0);
}

/**
 * make_buffer -function to create buffer of size with 1024 chars
 * @file_to: filename of file to be written to from created buffer
 * Return: pointer to buffer
 */

char *make_buffer(char *file_to)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (buffer);
}



/**
 * close_f -entry function
 * closes an open file descriptor.
 * @f_d: file descriptor
 *
 * Return: Returns void
 */
void close_f(int f_d)
{
	int i;

	i = close(f_d);

	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", f_d);
		exit(100);
	}
}
/* help from Isaac Samuel Birhanu's code acknowledged*/
