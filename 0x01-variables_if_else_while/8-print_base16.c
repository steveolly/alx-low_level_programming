#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char n;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (n = 'a'; n < 'g'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
