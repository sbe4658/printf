#include "main.h"
/**
 * _dpow - counts the number of digits.
 * @n: base 10 number.
 * @b: the base of which n would be converted to,
 * it is only for %u, %b, %o and %x.
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
		if (m == 1 || b == 10 || b == 8)
			return (0);
		n /= b;
	}
	return (1);
}
/**
 * _mem_base_set - set mem to digits from a number converting it to base b.
 * @n: number to be converted.
 * @b: the base to convert n to.
 * @C: Mainly for checking the format.
 *
 * Return: the number of digits printed after converted.
 */
int _mem_base_set(unsigned int n, int b, char C)
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
	if (b == 16)
		a = memhex(a, s, n, C);
	else
	{
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
	}
	write(1, a, s);
	free(a);
	return (s);
}
/**
 * memhex - converts n to base 8 and set, its digits in the address a.
 * @a: an address in memory.
 * @s: size of a.
 * @n: the size of a.
 * @C: format X or x,..etc.
 *
 * Return: Always 0.
 */
char *memhex(char *a, int s, unsigned int n, char C)
{
	int hex[6][2] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}
	};
	int m, c;

	a[s] = '\0';
	s--;
	while (s >= 0)
	{
		m = n % 16;
		if (m >= 10)
		{
			c = 0;
			while (c < 6)
			{
				if (hex[c][0] == m)
				{
					if (C == 'x')
						a[s] = hex[c][1];
					else
						a[s] = (hex[c][1] - 'a') + 'A';
				}
				c++;
			}
		}
		else
			a[s] = m + '0';
		n /= 16;
		s--;
	}
	return (a);
}
