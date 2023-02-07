#include "main.h"

/* betty style doc for function main goes there */
/**
 * create_file -entry function
 * reads a text file and prints it to the POSIX standard output.
 * @filename: file name & path
 * @text_content: chars to write
 *
 * Return: Returns 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w, len;


	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; *(text_content + len); len++)
			;
	}

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0000);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
/* help from Isaac Samuel Birhanu's code acknowledged*/
