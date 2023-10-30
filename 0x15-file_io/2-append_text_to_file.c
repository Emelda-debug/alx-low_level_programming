#include "main.h"
/**
 * append_text_to_file- function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int o, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (x = 0;  text_content[x]; x++)
		{
			x++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, x);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (x);
}
