#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char C;
	char B;

	for (C = 'a'; C <= 'z'; C += 1)
	{
		putchar(C);
	}
	for (B = 'A'; B <= 'Z'; B += 1)
	{
		putchar(B);
	}
putchar('\n');
return (0);
}
