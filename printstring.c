#include "main.h"

int printstr(char *a)
{
	int i;

	for (i = 0; *a != '\0'; i++)
	{
		_putchar(*a);
		a++;
	}

	return (i);
}
