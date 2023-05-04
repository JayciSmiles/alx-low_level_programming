#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number whose bit is to be set
 * @index: Index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
