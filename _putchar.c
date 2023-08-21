#include "main.h"
/**
 * _putchar - prints a character to stdout.
 * @c: a given char.
 *
 * Return: the printed char.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
