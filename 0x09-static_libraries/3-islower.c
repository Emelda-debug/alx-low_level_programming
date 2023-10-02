#include "main.h"
/**
 * _islower- function that checks for lowercase character
 * @s: variable to check for case
 * Return: 1 if c is lowercase, otherwise return 0
 */

int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
		return (1);
	else
		return (0);
}

