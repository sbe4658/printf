#include "main.h"
/**
 * base_2 - convertes base 10 numbers to binary and prints them.
 * @ar: argument.
 *
 * Return: the number of digits.
 */
int base_2(va_list ar)
{
	char *b;
	int size = 0;
	int tmp = va_arg(ar, int);

	if (tmp < 0)
		return (0);
	size = _dpow(tmp);
	b = malloc(sizeof(char) * (size + 1));
	if (b == NULL)
		return (0);

	_mem2set(b, size, tmp);
	write(1, b, size);
	free(b);
	return (size);
}
/**
 * _dpow - counts the number of digits.
 * @n: base 10 number.
 *
 * Return: the number of digits.
 */
int _dpow(int n)
{
	int i = 0;

	while (n > 0)
	{
		n /= 2;
		i++;
	}
	return (i);
}
/**
 * _mem2set - set mem to each binary digits after conversion.
 * @a: an adress in memory.
 * @s: the size of b.
 * @n: base 10 number.
 *
 * Return: same pointer after edit it.
 */
char *_mem2set(char *a, int s, int n)
{
	int i, m = 0;

	m = ispow2(n);
	a[s] = '\0';
	if (m == 0)
	{
		s--;
		for (; s >= 0; s--)
		{
			m = n % 2;
			a[s] = m + '0';
			n /= 2;
		}
	}
	else
	{
		a[0] = '1';
		for (i = 1; i < s; i++)
			a[i] = '0';
	}
	return (a);
}
/**
 * ispow2 - checks if n is one of 2 powers.
 * @n: a given n.
 *
 * Return: 1 if n is pow of 2, otherwise 0.
 */
int ispow2(int n)
{
	int m = 0;

	while (n >= 0)
	{
		m = n % 2;
		if (m == 1)
			return (0);
		n /= 2;
	}
	return (1);
}
