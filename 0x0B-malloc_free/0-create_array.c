#include "main.h"

/**
 * create_array - function for malloc
 * @size: size of the array
 * @c: value in the array
 * Return: return a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arry[i] = c;
	return (arry);
}
