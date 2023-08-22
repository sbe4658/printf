#include "main.h"
/**
 * main - test the esc char.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("'printf':\n");
	printf(" \" 123 \\:\n");
	printf("'_printf':\n");
	_printf(" \" 123 \\:\\ \n");
	return (0);
}
