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
	const char *s;

	va_list list;

	s = format;

	va_start(list, format);

	if (s == NULL)
		return (-1);


	while (*s)
	{
		/* handle other edge cases
		*/

		if (*s != '%')
		{
			n += _putchar(*s);
			s++;
			continue;
		}

		if (*s == '%')
		{
			s++;



			n += switchfunc(*s, list);

			/**
			switch (*s)
			{
				case 'c':
					ch = va_arg(list, int);
					n += _putchar(ch);
					break;
				case 's':
					string = va_arg(list, char *);

					n += printstr(string);
					break;
				case '%':
					n += _putchar('%');
					break;
				case 'd':
					n += printint(va_arg(list, int));
					break;
				case 'i':
					n += printint(va_arg(list, int));
					break;
				default:
					n += _putchar('%');
					n += _putchar(*s);
					break;
			}

			*/
		}
		/*
		 * increment while loop 
		 */

		s++;
	}


	va_end(list);
	return (n);
}
