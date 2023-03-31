#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer of linked list
 * @str: data to add to new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = malloc(sizeof(list_t)); /* create new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = str; /* set values */

	new_node->next = *head; /* first link new node to point to first node */
	*head = new_node; /* then switch list pointer to point to new node */

	return (new_node);
}
