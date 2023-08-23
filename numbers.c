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
	size = snum(tmp);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (0);
	print_nums(a, size, tmp);
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
	int size = 0;
	unsigned int tmp = va_arg(ar, unsigned int);
	char *a;

	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (0);
	print_nums(a, size, tmp);
	free(a);

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
