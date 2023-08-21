#include "main.h"
/**
 * print_str - print a string.
 * @ar: char * argument.
 *
 * Return: The length of string.
 */
int print_str(va_list ar)
{
	char *tmp = va_arg(ar, char *);
	int i;

	if (tmp == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; tmp[i] != '\0'; i++)
		_putchar(tmp[i]);
	return (i);
}
