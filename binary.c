#include "main.h"
/**
 * base_2 - convertes base 10 numbers to binary and prints them.
 * @ar: argument.
 *
 * Return: the number of digits.
 */
int base_2(va_list ar)
{
	int size = 0;
	unsigned int tmp = va_arg(ar, unsigned int);

	size = _mem_base_set(tmp, 2);
	return (size);
}
