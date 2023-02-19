#include <stdio.h>

/**
 * main - main function
 * Return: Alaways  0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
	}
	for (c = 'a'; c <= 'h'; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return (0);
}
