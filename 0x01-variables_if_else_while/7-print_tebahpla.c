#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}
