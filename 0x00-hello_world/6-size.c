#include <stdio.h>

/**
 * main - this the main for the function
 *
 * Return: always 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of an long long: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
