#include "main.h"
/**
 * _dpow - counts the number of digits.
 * @n: base 10 number.
 * @base: the base of which n would be converted to, it is only for %u, %b, %o and %x.
 *
 * Return: the number of digits.
 */
int _dpow(unsigned int n, int b)
{
	int i = 0;

	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}
/**
 * ispowb - checks if n is one of b powers.
 * @n: a given n.
 * @b: base.
 *
 * Return: 1 if n is pow of 2, otherwise 0.
 */
int ispowb(unsigned int n, int b)
{
	unsigned int m = 0;

	while (n != 0)
	{
		m = n % b;
		if (m == 1)
			return (0);
		n /= b;
	}
	return (1);
}
/**
 * _mem_base_set - set mem to digits from a number converting it to base b.
 * @n: number to be converted.
 * @b: the base to convert n to.
 *
 * Return: the number of digits printed after converted.
 */
int _mem_base_set(unsigned int n, int b)
{
	unsigned int m = 0;
	char *a;
	int i, s = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	s = _dpow(n, b);
	a = malloc(sizeof(char) * (s + 1));
	if (a == NULL)
		return (0);
	m = ispowb(n, b);
	a[s] = '\0';
	if (m == 0)
	{
		i = s - 1;
		for (; i >= 0; i--)
		{
			m = n % b;
			a[i] = m + '0';
			n /= b;
		}
	}
	else
	{
		a[0] = '1';
		for (i = 1; i < s; i++)
			a[i] = '0';
	}
	write(1, a, s);
	free(a);
	return (s);
}
