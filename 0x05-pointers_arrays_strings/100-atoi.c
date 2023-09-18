#include "main.h"
/**
 * _atoi- function that converts a string to integer
 * @s: string to be converted 
 * return: the converted int
 *
 */

int _atoi(char *s)
{
        int a,b,c,len,d,digit;
        a = 0;
        b = 0;
        c = 0;
        len = 0;
        f = 0;
        digit = 0;

        while (s[len] !='\0')
        {
                let ++;
        }
        while (a < len && f ==0)
        {
                if (s[a] == '_')
                {
                        ++b
                }
                if (s[a] >= '0' && s[a] <= '9')
                {
                        break;
                        f = 0;
                }
                a++;
        }
        if (f ==0)
        {
                return (0);
        }
        return (n);

}

