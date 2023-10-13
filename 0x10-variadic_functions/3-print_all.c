#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all- function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *y = "";
	va_list arg;
	int i = va_arg(arg, int);
	double f = va_arg(arg, double);
	char c = va_arg(arg, int);

	va_start(arg, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
						printf("%s%c", y, c);
						break;
				case 'i':
						printf("%s%d", y, i);
						break;
				case 'f':
						printf("%s%f", y, f);
						break;
				case 's':
						s = va_arg(arg, char*);
						if (!s)
							s = "(nil)";
						printf("%s%s", y, s);
						break;
				default:
						x++;
						continue;
			}
			y = ",";
			x++;
		}
	}
	printf("\n");
	va_end(arg);
}

