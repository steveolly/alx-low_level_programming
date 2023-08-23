#include "main.h"

/**
 * _strncat - function
 * @dest: var1
 * @src: var2
 * @n: var3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = src[i];
		src++
	}
	dest[destlen + n] = '\0';
	return (dest);
}
