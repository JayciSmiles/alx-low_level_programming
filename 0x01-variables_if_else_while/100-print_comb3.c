#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 1; c < 10; c++)
		{
			if (i < c && i != c)
			{
				putchar(i + '0');
				putchar(c + '0');
				if (i + c != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
