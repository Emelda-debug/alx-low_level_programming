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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	
	{
		printf("Error\n");
		exit (99);
	}

	if ((op == '/' && y == 0)||(*op == '%' && y == 0))
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}

