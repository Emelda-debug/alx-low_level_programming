#include <stdio.h>
#include "main.h"
/**
 * main- program that prints its name, followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
