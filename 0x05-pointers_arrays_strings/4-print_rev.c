#include "main.h"
/**
 * print_rev- function that prints the string in reverse
 * @s: string
 * return: 0 printed string in reverse
 */

void print_rev(char *s)
{
        int y= 0;
        int z;

        while (*s != '\0')
        {
                y++;
                s++;
        }

        s--;
        for (z = y; z>0; z--)
        {
                _putchar(*s);
                s--;
        }
        _putchar('\n');
}

