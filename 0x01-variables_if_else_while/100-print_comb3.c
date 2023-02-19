#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int e;
	int c = 0;

	while (c < 0)
	{
		e = 0;
		while (e < 10)
		{
			if (c != e && c < e)
			{
				putchar('0' + c);
				putchar('0' + e);

				if (e + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
				e++;

			}
			c++;
		}
		putchar('\n');
		return (0);
}
