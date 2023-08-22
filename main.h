#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printstr(char *a);
int printint(va_list list);
int _putchar(char c);
int puts(const char *);

/**
 * struct - Defining a struct with format specifiers and functions to handle print
 * @c: input character to compare
 * @f: corresponding function
 */

typedef struct op
{
        char *c;
        int (*f)(va_list);
} op_t;


#endif /*MAIN_H*/
