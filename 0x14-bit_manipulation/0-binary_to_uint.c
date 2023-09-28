#include "main.h"

/**
 * binary_to_uint - function name
 * @b: binary number
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		answer = answer * 2;
	
		if (b[i] == '1')
			answer++;
	}
	return (answer);
}
