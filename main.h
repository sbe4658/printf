#ifndef MAIN_H
#define MAIN_H

#ifndef NULL

#define NULL (void *)0

#endif

/* Header's section */
#include <stdarg.h>
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
int _dpow(unsigned int);
int ispow2(unsigned int);
char *_mem2set(char *, int, unsigned int);
int print_u(va_list);
int _abs(int);
void print_nums(char *, int, int);

/**
 * struct format - struct for format specifiers.
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
