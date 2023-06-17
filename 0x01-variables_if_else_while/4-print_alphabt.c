#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: lower cases except q and e
 * Return: Always return 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
