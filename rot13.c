#include "main.h"
/**
 * rot13 - print a string encoded by rot13.
 * @ar: argument list.
 *
 * Return: the number of args.
 */
int rot13(va_list ar)
{
	char *s = va_arg(ar, char *);
	int size = _strlen(s), i = 0;

	while (s[i])
	{
		if (_isalpha(s[i]))
		{
			if (s[i] > 'M' || s[i] > 'm')
				_putchar(s[i] - 13);
			else
				_putchar(s[i] + 13);
		}
		i++;
	}
}
/**
 * _isalpha - checks if a character is form the alphabets.
 * @c: character.
 *
 * Return: 0 if c is not a letter.
 */
int _isalpha(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
