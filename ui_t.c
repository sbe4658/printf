#include "main.h"
/**
 * print_oct - prints a given number in base 8.
 * @ar: an argument passed.
 *
 * Return: The number of digits printed.
 */
int print_oct(va_list ar)
{
	int size;

	size = _mem_base_set(va_arg(ar, unsigned int), 8, 'o');
	return (size);
}
/**
 * print_u - prints a given number in base 10.
 * same as d but without sign.
 * @ar: argument passed.
 *
 * Return: the number of digits printed.
 */
int print_u(va_list ar)
{
	int size = 0;

	size = _mem_base_set(va_arg(ar, unsigned int), 10, 'u');
	return (size);
}
/**
 * print_hex - prints a given number in base 16.
 * @ar: argument passed.
 *
 * Return: the number of digits printed.
 */
int print_hex(va_list ar)
{
	int size = 0;

	size = _mem_base_set(va_arg(ar, unsigned int), 16, 'x');
	return (size);
}
/**
 * print_HEX - prints a given number in base 16.
 * but allcaps
 * @ar: argument passed.
 *
 * Return: the number of digits printed.
 */
int print_HEX(va_list ar)
{
	int size = 0;

	size = _mem_base_set(va_arg(ar, unsigned int), 16, 'X');
	return (size);
}
