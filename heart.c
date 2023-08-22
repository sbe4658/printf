#include "main.h"
/**
 * _printf - prints formated text.
 * @format: a given string, the last named arg.
 *
 * Return: The number of chars printed.
 */
int _printf(const char *format, ...)
{
	int n = 0, i = 0;
	int (*fptr)(va_list);
	va_list ar;

	if (format == NULL)
		return (-1);
	va_start(ar, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				n++;
				i++;
			}
			else
			{
				fptr = search(format[i + 1]);
				if (fptr == NULL)
					_putchar(format[i]);
				else
				{
					n += (*fptr)(ar);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
	}
	return (n);
}
