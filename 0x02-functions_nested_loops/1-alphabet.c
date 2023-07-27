#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}

