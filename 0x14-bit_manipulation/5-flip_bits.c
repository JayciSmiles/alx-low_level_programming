#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *             to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: The necessary number of bits to change to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ch = n ^ m, i = 0;

	while (ch > 0)
	{
		i += (ch & 1);
		ch >>= 1;
	}
	return (i);
}
