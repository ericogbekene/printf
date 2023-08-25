#include "main.h"

/**
 * printint - Prints an integer.
 * @list: Argument list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int printint(va_list list)
{
	int n = va_arg(list, int);
	int num = n;
	int digit, exp = 1;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	while (n / exp >= 10)
		exp *= 10;

	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num %= exp;
		exp /= 10;
		count++;
	}

	return (count);
}
