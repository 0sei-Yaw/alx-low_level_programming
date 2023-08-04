#include "main.h"

/**
 * clear_bit - the value of a given bit is set to 0
 * @n: the number to change pointer
 * @index: the bit to clear index
 *
 * Return: successful if 1, fails if  -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
