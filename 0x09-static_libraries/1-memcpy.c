#include "main.h"

/**
 * _memcpy - function to copies
 * @dest: to copy ot
 * @src: to copy from
 * @n: number of times to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
