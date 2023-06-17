#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}	
