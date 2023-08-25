#include "main.h"

/**
 * _printf - prints a format string to standard output
 * @format: String to be printed to standard output
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{

	int n = 0;

	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			n += _putchar(*format);
			format++;
			continue;
		}
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			n += switchfunc(*format, list);
		}
		format++;
	}
	va_end(list);
	return (n);
}
