#include "main.h"

/**
 * print_last_digit - function name
 * @n: nunmber
 * Return: something
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
		_putchar(i + '0');
	}
	else
	{
		_putchar(i + '0');
	}
	return (i);
}
