#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of linked list
 * @str: data to add to new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tmp;
	
	new_node = malloc(sizeof(list_t)); /* make new node and set values */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL) /* account for empty list by pointing head to node */
		*head = new_node;
	else
	{
		tmp = *head; /* set tmp ptr to iterate w/o moving head ptr */

		while (tmp->next != NULL) /* iterate till last node */
			tmp = tmp->next;
		tmp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
