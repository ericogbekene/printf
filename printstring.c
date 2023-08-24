#include "main.h"

/**
 * printstr - a function to print a string found after format specifier
 * @a: input string
 *
 * Return: the number of arguments printed
 */

int printstr(char *mystring)
{
	int i;

	if (mystring == NULL)
	{
		puts("(null)");
		return (6);
	}

	for (i = 0; mystring[i] != '\0'; i++)
	{
		_putchar(mystring[i]);
	}

	return (i);
}
