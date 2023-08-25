#include "main.h"

int printaddress(char value)
{
	int n;

	n = _printf("%s", &value);
	return (n);
}
