#ifndef MAIN_H
#define MAIN_H

#ifndef NULL

#define NULL (void *)0

#endif

/* Header's section */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Function's section */
int _putchar(char);
int _printf(const char *format, ...);
int (*search(char c))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_dec(va_list);
int print_int(va_list);
int snum(int);
int base_2(va_list);
int _dpow(int);
int ispow2(int);
char *_mem2set(char *, int, int);

/**
 * format - struct for format specifiers.
 *
 * @t: for the type refered to it with a single char.
 * @f: a function pointer.
 */
typedef struct format
{
	char t;
	int (*f)(va_list);
} type;

#endif
