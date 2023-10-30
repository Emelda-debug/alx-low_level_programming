#include "main.h"
/**
 * create_file- function to read a textfile then print to POSIX stdout
 * @filename: pointer to created file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, w, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
		{
			l++;
		}
	}

		x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(x, text_content, l);
		if (x == -1 || w == -1)
		{
			return (-1);
		}
		close(x);
		return (1);
}

