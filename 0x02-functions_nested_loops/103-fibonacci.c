#include <stdio.h>
#include"main.h"
/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: Nothing.
 */
int main(void)
{
	int counter;
	unsigned long first_number, second_number, result;

	first_number = 0;
	second_number = 1;
	result = 0;
	counter = 0;

	while (counter < 4000000)
	{
		counter = first_number + second_number;
		first_number = second_number;
		second_number = counter;

		if (counter % 2 == 0)
			result = result + counter;

	}

	printf("%lu\n", result);
	return (0);
}

