#include "main.h"

int printstr(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		a++;
	}

	return (i);
}
