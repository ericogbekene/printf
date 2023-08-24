#ifndef MAIN_H
#define MAIN_H

#define BUFFER 1024

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printstr(char *a);
int printint(int);
int switchfunc(char mychar, ...);
int _putchar(char c);
int puts(const char *);

/**
 * struct op - a struct with format specifiers and functions to handle print
 * @c: input character to compare
 * @f: corresponding function
 */

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;


#endif /*MAIN_H*/
