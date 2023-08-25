#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an integer.
 * @num: The integer to be printed in binary.
 *
 * This function takes an integer as input and prints its binary
 * representation to the standard output.
 */
void print_binary(int num)
{
unsigned int mask = 1 << (sizeof(int) * 8 - 1);
int (printed = 0);

while (mask)
{
putchar((num & mask) ? '1' : '0');
mask >>= 1;
printed = 1;
}

if (!printed)
putchar('0');
}

_printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the print_binary function.
 * It provides an integer and calls print_binary to display its
 * binary representation on the standard output.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
int (number = 42);

_printf("Binary representation of %d:\n", number);
print_binary(number);

return (0);
}
