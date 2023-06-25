#include <stdio.h>

/**
 * main - Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(word[i]);
	}

	putchar('\n');

	return (0);
}
