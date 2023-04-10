#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0.
 * @n: A pointer to the bit.
 * @index: index of the bit to clear.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
