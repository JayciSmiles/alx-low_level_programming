#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is greater than the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Shift the number to the right by index bits and check the last bit */
	return ((n >> index) & 1);
}
