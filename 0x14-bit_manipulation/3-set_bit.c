#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: index of the bit to set to 1.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
