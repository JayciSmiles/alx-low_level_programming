#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times alphabets, in lower cases
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int le;
	char ch;

	le = 0;
	while (le < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
