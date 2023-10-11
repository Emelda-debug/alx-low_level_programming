#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-program that performs simple operations
 * @argc: argument counter
 * @argv:argument vector
 * Return: always 0 is success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	x = atoi(argv[1]);
	p = argv[2];
	y = atoi(argv3);

	if (get_p_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}

	if ((p == '/' && y == 0)||
	
			printf("Error\n");
			exit (100);

