#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints out functions
 * @format - the format
 *
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	va_list lst;

	if (format == 0)
		return (0);

	va_start(lst, format);
	va_end(lst);
}
