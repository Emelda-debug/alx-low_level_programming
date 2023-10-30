#include "main.h"
/**
 * read_textfile- function that reads a text file and printd it to
 * the POSIX stdout
 * @filename: textfile to be read
 * @letters: letters to be read
 * Return: 0 if file can't be opened, read and filename is NULL
 * and if write fails else return actual
 * number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);
	return (w);
}
