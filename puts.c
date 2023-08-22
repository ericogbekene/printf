#include "main.h"

/**
 * puts - prints a string to standard output
 * @s: input string
 *
 * Return: the number of characters in string
 */

int puts(const char *s)
{
	int i;
	const char *a;

	a = s;

	if (a == NULL)
		a = "(null)";

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
	return (i);
}
