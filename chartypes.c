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
	i = _strlen(tmp);
	write(1, tmp, i);
	return (i);
}
/**
 * print_Str - works like print_str, but print_Str prints
 * replace non-printable characters with \x.
 * @ar: argument passed.
 *
 * Return: the length.
 */
int print_Str(va_list ar)
{
	char *tmp = va_arg(ar, char *);
	int s = 0;

	for (; *tmp != '\0'; tmp++)
	{
		if (*tmp > 31 && *tmp < 127)
			putchar(*tmp);
		else
		{
			write(1, "\\x", 2);
			s += 2 + _mem_base_set(*tmp, 16, '2');
		}
		s++;
	}
	return (s);
}
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
/**
 * _strlen - compute the length of a string.
 * @s: string.
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
		len++;

	return (len);
}
