#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i == 10)
			putchar('a');
		else if (i == 11)
			putchar('b');
		else if (i == 12)
			putchar('c');
		else if (i == 13)
			putchar('d');
		else if (i == 14)
			putchar('e');
		else if (i == 15)
			putchar('f');
		else
			putchar(i + '0');
	putchar('\n');
	return (0);
}
