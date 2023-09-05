#include "main.h"

/**
 * str_concat -  function name for the malloc concat
 * @s1: first string
 * @s2: sencond string
 * Return: return the new pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int count_s1 = 0;
	int count_s2 = 0;
	int sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		count_s2++;
	sum = count_s1 + count_s2;

	concat = malloc(sizeof(char) *  sum + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[count_s1 + i] = s2[i];
	return (concat);
}
