#include "main.h"

/**
 * printstr - a function to print a string found after format specifier
 * @a: input string
 *
 * Return: the number of arguments printed
 */

int printstr(char *a)
{
	int i;

	if (a == NULL)
		puts("(nil)");

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		i++;
	}

	return (i);
}
