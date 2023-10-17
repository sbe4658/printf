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
	int tmp, size = 0;
	char *a;

	tmp = va_arg(ar, int);
	size = _dpow(tmp, 10);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (0);
	print_nums(a, size, tmp);
	if (tmp < 0)
		size++;

	return (size);
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
 * print_nums - prints an array of numbers.
 * Description: the print_nums function takes an array of chars sets it with
 *		digits of the number of n, and then it prints the array a.
 * @a: array.
 * @s: the size of a.
 * @n: a number.
 *
 * Return: Nothing.
 */
void print_nums(char *a, int s, int n)
{
	int tmp = 0, i;

	a[s] = '\0';
	i = s;
	s--;
	if (n < 0)
		_putchar('-');
	while (s >= 0)
	{
		tmp = n;
		if (tmp < 0)
			a[s] = ((tmp % 10) * (-1)) + 48;
		else
			a[s] = (tmp % 10) + 48;
		n /= 10;
		s--;
	}
	write(1, a, i);
	free(a);
}
