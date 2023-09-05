#include "main.h"

/**
 * _strdup - function name of another malloc question
 * @str: Variable for the string parameter
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *string;
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (str == NULL)
		return (NULL);

	string = malloc(sizeof(char) * (count - 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		string[i] = str[i];

	return (string);
	free(string);
}
