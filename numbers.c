#include "main.h"
#include <stdio.h>
/**
 * print_dec - prints base 10 numbers.
 * @ar: argument form a list.
 *
 * Return: number of digits.
 */
int print_dec(va_list ar)
{
	int tmp, size = 0, i, n = 0;
	char *a;

	tmp = va_arg(ar, int);
	size = snum(tmp);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (0);

	a[size] = '\0';
	i = size - 1;
	if (n < 0)
		_putchar('-');
	while (i >= 0)
	{
		n = tmp;
		if (n < 0)
			a[i] = ((n % 10) * (-1)) + 48;
		else
			a[i] = (n % 10) + 48;
		tmp /= 10;
		i--;
	}
	write(1, a, size);
	free(a);
	if (tmp < 0)
		size++;

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

	printf("%d\n", n);
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
/**
 * print_u - prints unsigned ints, base 10.
 * @ar: argument passed.
 *
 * Return: the number of digits printed.
 */
int print_u(va_list ar)
{
	int size = 0, i, n = 0;
	unsigned int tmp = va_arg(ar, unsigned int), m;
	char *a;

	m = tmp;
	if (m == 0)
		size = 1;
	while (m != 0)
	{
		m = (m / 10);
		size++;
	}
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (0);
	a[size] = '\0';
	i = size - 1;
	while (i >= 0)
	{
		n = tmp % 10;
		a[i] = n + 48;
		tmp /= 10;
		i--;
	}
	write(1, a, size);
	free(a);

	return (size);
}
