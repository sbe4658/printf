#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL (void *)0
#endif

/* Header's section */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function's section */
int _putchar(char);
int _printf(const char *format, ...);
int (*search(char c))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_Str(va_list);
int print_dec(va_list);
int print_int(va_list);
int snum(int);
int base_2(va_list);
int _dpow(unsigned int, int);
int ispowb(unsigned int, int);
int _mem_base_set(unsigned int, int, char);
int print_u(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);
char *memhex(char *, int, unsigned int, char);
void print_nums(char *, int, int);
int _strlen(char *);
int string_rev(va_list); 
void revrecu(char *);

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
