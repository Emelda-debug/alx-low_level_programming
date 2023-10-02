#include "main.h"

/**
*_isupper- Code to check for an uppercase letter
*@c: Variable text to check text case
*Return: 0 or 1 means success
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
}
	else
{
		return (0);
}
}

