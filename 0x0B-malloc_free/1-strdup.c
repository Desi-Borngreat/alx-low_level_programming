#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Null
 */

char *_strdup(char *str)
{
	char *dee;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dee = malloc(sizeof(char) * (i + 1));

	if (dee == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dee[r] = str[r];
	return (dee);
}

