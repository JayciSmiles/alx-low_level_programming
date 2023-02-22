#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times alphabets, in lower cases
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;


	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
