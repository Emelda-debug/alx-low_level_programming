#include <stdio.h>
/**
 * main- program that prints the name of the file it was
 * compiled from, followed by a new line
 * Return: the name of the file used during compilation
 */

int main(void)
{
	char *file = __FILE__;
	
	printf("%s\n", file);
	return (0);
}

