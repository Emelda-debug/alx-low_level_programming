#include "main.h"
/**
 * puts_half- function that prints half
 * of a string followed by a new line
 * @str: string to be inputted
 * return: length
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
