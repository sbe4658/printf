#include "main.h"
/**
 * search - seachs for the right format specifier.
 * @c: a given character.
 *
 * Return: a pointer to the right function.
 */
int (*search(char c))(va_list)
{
	type frs[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'i', print_int},
		{'b', base_2},
		{'u', print_u}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if (c == frs[i].t)
			return (frs[i].f);
	}
	return (NULL);
}