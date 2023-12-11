#include "main.h"
/**
 * _strcmp- function to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: string length
 */
int _strcmp(char *s1, char *s2)
{
	int cnt, val;

	cnt = 0;
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0')
	{
		cnt++;
	}
	val = s1[cnt] - s2[cnt];
	return (val);
}
