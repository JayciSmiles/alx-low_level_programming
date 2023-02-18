#include <stdio.h>

/**
 * main - prints alpha in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
