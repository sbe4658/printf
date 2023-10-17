#include "main.h"
/**
 * string_rev - prints a string in reverse.
 * @ar: argument list.
 *
 * Return: The number of chars.
 */
int string_rev(va_list ar)
{
	char *tmp = va_arg(ar, char *);
	int size = _strlen(tmp);

	revrecu(tmp);
	return (size);
}
/**
 * revrecu - reverse a string.
 * @s: string.
 *
 * Return: Nothing.
 */
void revrecu(char *s)
{
	if (*s)
	{
		revrecu(s + 1);
		_putchar(*s);
	}
}
