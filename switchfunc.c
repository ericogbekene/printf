#include "main.h"

int switchfunc(const char mychar, va_list list)
{
	int n;
	char ch, *mystring;

	switch (mychar)
	{
		case 'c':
			ch = va_arg(list, int);
			n = _putchar(ch);
			break;
		case 's':
			mystring = va_arg(list, char *);
			n = printstr(mystring);
			break;
		case '%':
			n = _putchar('%');
			break;
		case 'd':
			n = printint(va_arg(list, int));
			break;
		case 'i':
			n = printint(va_arg(list, int));
			break;
			/**
			  case 'p':
			  n = printaddress(list);
			  break;
			  case 'b':
			  n = printbinary(va_arg(list, int));
			  break;
			  */
		default:
			n = _putchar('%');
			n = _putchar(mychar);
			break;

	}

	return (n);
}
