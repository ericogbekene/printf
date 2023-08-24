#include "main.h"
#include <stdio.h>

int main(void)
{
	int len = 0;
	int len2 = 0;

	len = _printf("A simple sentence simple\n");
	len2 = printf("A simple sentence simple\n");

	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	
	
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	/* len2 = printf("A simple %v entence\n"); */
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = printf("%s\n", NULL);
	printf("%d\n", len);

	len2 = _printf("%s\n", NULL);
	_printf("%d\n", len2);

	/*
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
 	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	*/
	return (0);
}
