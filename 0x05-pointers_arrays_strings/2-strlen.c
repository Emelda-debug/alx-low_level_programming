#include "main.h"

/**
 * _strlen- function to print string length
 * @s: string whose length is to be determined
 * return: return length of string
 */

int _strlen(char *s)

{
        int y  = 0;

        while (*s != '\0')
        {
                y++;
                s++;
        }

        return (y);


}
