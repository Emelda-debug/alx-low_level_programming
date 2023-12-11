#include "main.h"
/**
 * _strcat- function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int x, y;
	 x = 0;
	 while (dest[x] != '\0')
	 {
		 x++;
	 }
	 y = 0;
	 while (src[y] != '\0')
	 {
		 dest[x] = src[y];
		 x++;
		 y++;
	 }
	 dest[i] ='\0';
	 return (dest);
}
