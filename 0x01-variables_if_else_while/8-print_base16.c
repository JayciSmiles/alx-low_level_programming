#include <stdio.h>

/**
 * main - main function
 * Return: Alaways  0
 */
int main(void)
{
	int c = 0, e = 9;

	while (c <= e)
	{
		putchar(c + '0');
		c++;
	}

	c = 97;
	e = 102;

	while (c <= e)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
