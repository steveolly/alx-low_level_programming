#include "main.h"

/**
 * _strcat - name of function
 * @dest: var1
 * @src: var2
 * Return: something
 */

char *_strcat(char *dest, char *src)
{
	int destlnt = 0;
	int srclnt = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlnt++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclnt++;
	}
	for (i = 0; i <= srclnt; i++)
	{
		dest[destlnt + i] = src[i];
	}
	return (dest);
}
