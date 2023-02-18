#include <stdio.h>

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
		putchar(o);

	for (o = 'A'; o <= 'Z'; o++)
		putchar(o);
	putchar('\n');
	return (0);
}
