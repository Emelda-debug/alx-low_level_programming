#include "main.h"

/**
 * print_line -code to draw a straight line in the terminal
 * @n: number of times the character will  be printed
 */
void print_line(int n)
{
if (n <= 0)
        {
                _putchar('\n');
        } else
        {
                int a;

                for (a = 1; a <= n; a++)
                {
                        _putchar('_');
                }
                _putchar('\n');
        }

}
