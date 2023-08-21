#include "main.h"
/**
 * print_dec - prints base 10 numbers.
 * @ar: argument form a list.
 *
 * Return: number of digits.
 */
int print_dec(va_list ar)
{
	int tmp, size = 0, i = 0, n = 0;
	char *a;

	tmp = va_arg(ar, int);
	size = snum(tmp);
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	{
		printf("malloc failed");
		return (0);
	}
	a[size] = '\0';
	i = size - 1;
	while (i >= 0)
	{
		n = tmp;
		a[i] = (n % 10) + 48;
		tmp = tmp / 10;
		i--;
	}
	for (i = 0; i < size; i++)
	{
		if (tmp < 0)
		{
			_putchar('-');
			i++;
		}
		_putchar(a[i]);
	}
	free(a);
	return (size);
}
/**
 * snum - counts the number of digits in a number.
 * @n: a given number.
 *
 * Return: the number of digit.
 */
int snum(int n)
{
	int i = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}
/**
 * print_int - prints a integer.
 * @ar: argument.
 *
 * Return: the number of digits.
 */
int print_int(va_list ar)
{
	int size;

	size = print_dec(ar);
	return (size);
}
