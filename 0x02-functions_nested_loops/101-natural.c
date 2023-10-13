#include <stdio.h>

/**
 * main - ...
 *
 * Return: ..
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		int mul;

		mul = 3 * i;
		if (mul < 1024)
			sum = sum + mul;
	}
	for (i = 0; i < 1024; i++)
	{
		int mul;

		mul = 5 * i;
		if (mul < 1024)
			sum = sum + mul;
	}

	for (i = 0; i < 1024; i++)
	{
		int mul15;

		mul15 = 15 * i;
		if (mul15 < 1024)
			sum = sum - mul15;
	}
	printf("%d\n", sum);
	return (0);
}
