#include "main.h"
/**
 * puts2- function that prints every other character
 * of a string starting with the first character
 * followed by a new line
 * @str: string to be inputted
 * return: printed characters
 *
 */

void puts2(char *str)
{

        int y = 0;
        int z = 0;
        char *b = str;
        int c;

        while (*b != '\0')
        {
                b++;
                y++;
        }

        z = y-1;
        for (c=0; c <= z; c++ )
        {
                if (c % 2 ==0)
                {
                        _putchar(str[c]);
                }
        }

        _putchar('\n');
}


