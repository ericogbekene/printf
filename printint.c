#include "main.h"

/**
 * printint - prints an integer
 * @list: of arguments
 *
 * Return: number of characters printed
 */

int printint(int mynumber)
{
	int n = mynumber;
	int num, digit, exponent = 1;
	int i = 1;
	int last = n % 10;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exponent = exponent * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exponent;
			_putchar(digit + '0');
			num = num - (digit * exponent);
			exponent = exponent / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}

