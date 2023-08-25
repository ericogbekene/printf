#include <stdio.h>
#include <stdarg.h>

/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @num: The unsigned integer to be printed in binary.
 *
 */
void print_binary(unsigned int num)
{
if (num > 1)
print_binary(num / 2);
}
putchar(...,'0' + (num % 2));
}

/**
 * print_int - Prints an integer using the standard printf function.
 * @num: The integer to be printed.
 *
 */
void print_int(int num)
{
printf("%d", num);
}

/**
 * custom_printf - Implements a custom printf function with limited support.
 * @format: The format string containing the custom specifiers.
 * @...: Variable number of arguments based on the format string.
 *
 */
void custom_printf(const char *format, ...)
{
va_list(args);
va_start(args, format);

const char ((*p) = format);

char ch;
while ((ch = *p) != '\0')
{
if (ch == '%')
{
p++;
if (*p == 'b')
{
unsigned int num = va_arg(args, unsigned int);
print_binary(num);
}
else
{
putchar('%');
}
}
else
{
putchar(*p);
}
p++;
}

va_end(args);
}

/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the custom print functions.
 * It prints an integer and its binary representation to the standard output.
 * Return: 0
 */
int main(void)
{
int ((num) = 42);
unsigned int ((binaryNum) = 18);

printf("Number: ");
print_int(num);
printf("\n");

printf("Binary: ");
custom_printf("%b\n", binaryNum);

return (0);
}
