#include "main.h"

/**
 * print_alphabet - function that  prints alphabet in lower cases
 *
 * Return: always 0;
 */

void print_alphabet(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
		_putchar(le);

	_putchar('\n');
}
