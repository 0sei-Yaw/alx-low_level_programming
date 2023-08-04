#include "main.h"

/**
 * set_bit - sets a bit index to 1
 * @n: the number to change pointer
 * @index: the bit to set to 1 index
 *
 * Return: sucess if 1, fails if -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
