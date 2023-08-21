#include "main.h"

int _printf(const char *format, ...)
{

	int i, n = 0;
	const char *s;
	const char *c;
	char *string;
	char ch;

	va_list list;

	s = format;

	va_start(list, format);

	while(*s)
	{

		/**
		 * handle edge case 
		if (*s == NULL)
			return (-1);

		if (va_list list == NULL)
			_putchar("(null)");
			*/

		if(*s != '%')
		{
			n += _putchar(*s);
			s++;
			continue;
		}
		s++; //switch to next character after it hits %
		
		switch (*s)
		{
			case 'c':
				ch = (char)va_arg(list, int);
				n += _putchar(ch);
				break;
			case 's':
				string = va_arg(list, char *);
				n += printstr(string);
				break;
			case '%':
				n += _putchar('%');
				break;
				/**
			case 'd':
				n += printint(ch);
				break;
			case 'i':
				n += printint(ch);
				break;
				*/
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
