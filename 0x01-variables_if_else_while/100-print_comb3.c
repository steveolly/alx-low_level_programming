#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i = '0';

	for (i = '0'; i < '9'; i++)
	{
		int j = '1';

		for (j = '1'; j < '10'; j++)
		{
			if (!((j == i) || (i > j)))
			{
				putchar(i);
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}
