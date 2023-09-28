#include "main.h"
int see_pal(char *s, int a, int b);
int _strlen_recursion(char *s);
/**
 * is_palindrome- function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (see_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion- to determine string length
 * @s: string whose length is to be determined
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * see_pal- demonstration to see if a string is palindrome
 * @s: string to be checked
 * @a: iterator
 * @b: length of string
 * Return: 1 if string palindrome, otherwise return 0
 */
int see_pal(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
	{
		return (0);
	}
	if (a >= b)
	{
		return (1);
	}
	return (see_pal(s, a + 1, b - 1));
}
