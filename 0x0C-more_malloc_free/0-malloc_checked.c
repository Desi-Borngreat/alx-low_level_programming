#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *new_memo;

	new_memo = malloc(b);
	if (new_memo == NULL)
		exit(98);
	return (new_memo);
}

