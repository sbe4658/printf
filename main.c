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
		return (0);
	va_start(ar, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		n++;
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			else
			{
				fptr = search(format[i + 1]);
				n += (*fptr)(ar);
			}
			i++;
		}
		else
			_putchar(format[i]);
	}
	return (n - 1);
}
