#include <stdio.h>

/**
 * positive_or_negative - checks if given number is +, - or 0
 * @i: the number to be checked
 *
 * REturn: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
