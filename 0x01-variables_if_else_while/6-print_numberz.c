#include <stdio.h>
/**
 * main - main function
 * Return: Always
 */
int main(void)
{
	int h = 0;

	while (h < 10)
	{
		putchar(47 + h);
		h++;
	}
	putchar('\n');
	return (0);
}
