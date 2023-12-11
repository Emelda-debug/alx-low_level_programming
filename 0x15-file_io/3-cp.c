#include "main.h"
/**
 * error_file- checks if a file can open
 * @file_from: file source
 * @file_to: file destination
 * @argv: argument vector
 * @Return: Nil
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main- code entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, x;
	ssize_t c,w;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	c = 1024;
	while (c == 1024)
	{
		c = read(file_from, b, 1024);
		if (c == -1)
		{
			error_file(-1, 0, argv);
		}
		w = write(file_to, b, c);
		if (w == -1)
		{
			error_file(0, -1, argv);
		}
	}
	x = close(file_from);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
