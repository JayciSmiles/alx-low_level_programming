#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x alphabets
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int le;
	char ch;

	for (le = 0; le <= 10; le++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
