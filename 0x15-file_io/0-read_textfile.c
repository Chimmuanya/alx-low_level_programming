#include "main.h"

/* betty style doc for function main goes there */
/**
 * read_textfile -entry function
 * reads a text file and prints it to the POSIX standard output.
 * @filename: file name & path
 * @letters: number of chars to write
 *
 * Return: Returns actual number of chars read or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t o, r, w;
	char *bufn;

	bufn = malloc(sizeof(char) * letters);
	if (!bufn)
		return (0);
	o = open(filename, O_READONLY);
	r = read(o, bufn, letters);
	w = write(STDOUT_FILENO, bufn, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(bufn);
		return (0);
	}
	free(bufn);
	close(o);
	return (w);
}
/* help from Isaac Samuel Birhanu's code acknowledged*/
