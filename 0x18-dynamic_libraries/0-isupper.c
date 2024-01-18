#include "main.h"

/**
 * _isupper - name of function
 * @c: variable name
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
