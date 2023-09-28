#include "main.h"

/**
 * get_bit - finction name
 * @n: num of search
 * @index: index
 * Return: vale of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
