#include "main.h"

int switchfunc(char mychar, ...)
{
	unsigned int n;

	va_list list;

	va_start(list, mychar);

	while (mychar)
	{
		if (list != NULL)
		{
			switch (mychar)
			{
				case 'c':
					n += _putchar(mychar);
					break;
				case 's':
					n += printstr(va_arg(list, char*));
					break;
				case '%':
					n += _putchar('%');
					break;
				case 'd':
				case 'i':
					n += printint(va_arg(list, int));
					break;
				default:
					n += _putchar('%');
					n += _putchar(mychar);
			}

		}
		mychar++;

	}
	return (n);

	va_end(list);
}
/**
 *
 int main(void);
 {
 int result;

 result = switchfunc(cesis);
 return (0);
 }
 */
