#include "main.h"

/**
*_isdigit- code that checks for a digit (0 through 9)
*@c: variable for digit to be checked
*return: 0 or 1 depending on output means success
*/

int _isdigit(int c)
{

        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);


}
