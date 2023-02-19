#include <stdio.h>

/**
 * main - main function
 * Return: Alaways  0
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar (num % 10 + '0');
	for (c = 'a'; c <= 'h'; c++)
		putchar (c);
	putchar('\n');

	return (0);
}
