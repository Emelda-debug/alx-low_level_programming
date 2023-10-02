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
	printf("%s\n", argv[0]);
	printf("%d", argc);
	return (0);
}
