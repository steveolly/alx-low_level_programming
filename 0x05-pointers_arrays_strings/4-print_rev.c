#include "main.h"

/**
 * print_rev - the function name
 * @s: variable
 */

void print_rev(char *s)
{
	int i, j = 1;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
