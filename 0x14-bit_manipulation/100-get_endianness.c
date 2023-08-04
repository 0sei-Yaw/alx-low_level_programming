#include "main.h"

/**
 * get_endianness - a machine is checked if little or big endian
 * Return: big if 0, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
