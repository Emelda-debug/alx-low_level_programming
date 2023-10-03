#include <stdio.h>
#include "main.h"
/**
 * main- program that prints its name, followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
