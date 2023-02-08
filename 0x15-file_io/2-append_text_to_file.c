#include "main.h"

/* betty style doc for function main goes there */
/**
 * append_text_to_file -entry function
 * reads a text file and appends to it.
 * @filename: file name & path
 * @text_content: chars to write
 *
 * Return: Returns 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;


	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; *(text_content + len); len++)
			;
	}
	else
		text_content = "";

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
/* help from Isaac Samuel Birhanu's code acknowledged*/
