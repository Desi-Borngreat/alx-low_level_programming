#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fails / starting address of the new list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len_str;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len_str = 0; str[len_str] != '\0';  len_str++)
	;

	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
