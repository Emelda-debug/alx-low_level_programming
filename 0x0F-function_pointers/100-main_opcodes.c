#include <stdio.h>
#include <stdlib.h>
/**
 * main- program that prints the opcodes
 * of its own main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 is success
 */

int main(int argc, char *argv[])
{
	int x, y;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y == x - 1)
		{
			printf("%02hhx\n", array[y]);
			break;
		}
		
		printf("%02hhx", array[y]);
	}
	return (0);
}

