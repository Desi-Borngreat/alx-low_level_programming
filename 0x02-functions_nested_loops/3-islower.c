#include"main.h"

/**
 * _islower - check if character is lowercase
 * @c: checks input of function
 * Return: 1 if `c` is lowercase otherwise always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

