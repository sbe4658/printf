#include "main.h"
/**
 * print_char - prints a char.
 * @ar: a given char arg.
 *
 * Return: 1 wich is the number of char printed.
 */
int print_char(va_list ar)
{
	char c = va_arg(ar, int);

	_putchar(c);
	return (1);
}
