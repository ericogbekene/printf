#include <stdio.h>
#include "main.h"

int main(void)
{
	int len = 0, len2 = 0;

	len = _printf("Hello: %c, %s\n", 'A', "World");
	len2 = printf("Hello: %c, %s\n", 'A', "World");

	printf("%d\n", len);
	printf("%d\n", len2);
	
	

	return (0);
}
