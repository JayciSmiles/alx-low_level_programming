#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int ch;
	unsigned int con_num = 0, mul = 1;

	if (!b)
		return (0);
	for (ch = 0; b[ch];)
		ch++;
	for (ch -= 1; ch >= 0; ch--)
	{
		if (b[ch] != '0' && b[ch] != '1')
			return (0);
		con_num += (b[ch] - '0') * mul;
		mul *= 2;
	}
	return (con_num);
}
