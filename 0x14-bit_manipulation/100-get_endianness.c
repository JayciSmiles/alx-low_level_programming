#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian.
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int i = 1;
	char *ed = (char *) &i;

	if (*ed == 1)
		return (1);
	return (0);
}
