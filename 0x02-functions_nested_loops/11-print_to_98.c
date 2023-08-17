#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function name
 * @n: number
 * Return: noting
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d", 98);
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d", 98);
	}
	printf("\n");
}
