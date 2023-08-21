#include "main.h"

/**
 * swap_int - the function name
 * @a: variable 1
 * @b: variable 2
 */

void swap_int(int *a, int *b)
{
	int num_a;

	num_a = *a;
	*a = *b;
	*b = num_a;
}
