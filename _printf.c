#include "main.h"

/**
 * printf - prints a format string to standard output according to a set of instructions
 * @format: String to be printed to standard output
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{

	int n = 0;
	const char *s;
	char *string;
	char ch;

	va_list list;

	s = format;

	va_start(list, format);

	while(*s)
	{

		/**
		 * if (s == NULL)
		 * n += _puts("(null)");
		 *
		 * if (list == NULL)
		 * n += _puts("(null)");
		 * handle edge case
		 */

		if(*s != '%')
		{
			n += _putchar(*s); /*should it be *s ?*/
			s++;
			continue;
		}
		s++; /**
		       switch to next character after it hits %
		       */

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
			case 'i':
				n += printint(list);
				break;
			default:
				n += _putchar('%');
				n += _putchar(*s);
				break;
		}
		s++;
	}


	va_end(list);
	return (n);
}
