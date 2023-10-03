#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr- function that concatenates all the arguments of my program
 * @ac: argument 1
 * @av: argument 2
 * Return: pointer to the new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int i = 0;
	int j = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			j++;
	}
	j = j + ac;
	str = malloc(sizeof(char) * j + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		str[i] = av[y][x];
		i++;
	}
	if (str[i] == '\0')
	{
		str[i++] = '\n';
	}
	}
	return (str);
}

