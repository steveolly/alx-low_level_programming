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

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	string = malloc(sizeof(char) * (count + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		string[i] = str[i];

	return (string);
}
