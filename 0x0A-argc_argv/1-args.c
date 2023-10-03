#include <stdio.h>
#include "main.h"
/**
 * main- program that prints number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
