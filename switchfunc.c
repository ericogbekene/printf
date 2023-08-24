#include "main.h"

int switchfunc(char mychar, va_list list)
{
	unsigned int n;

		if (list != NULL)
		{
			switch (mychar)
			{
				case 'c':
					n = _putchar(mychar);
					break;
				case 's':
					n = printstr(va_arg(list, char*));
					break;
				case '%':
					n = _putchar('%');
					break;
				case 'd':
				case 'i':
					n = printint(va_arg(list, int));
					break;
				default:
					n = _putchar('%');
					n += _putchar(mychar);
			}

		}
		/**
		 * insert what it returns if it is NULL
		 */



	return (n);
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
