#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup- function that returns a pointer
 *  to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter
 * @str: input string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{

	char *str2 = malloc(sizeof(char) * (strlen(str) + 1));
	/* allocating memory to str2 for characters*/

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str2, str);
	/* duplicating str*/
	return (str2);
}
