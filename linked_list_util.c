#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * add_node - adds a node to the start of a stack_t stack
 * @head: list head
 * @n: number for the new node
 *
 * Return: newly created node, if creation fails, the
 * function will return NULL.
 */
stack_t *add_node(stack_t **head, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}

/**
 * print_stack - prints the contents of a stack_t stack
 * @h: list head
 *
 * Return: number of elements of the list
 */
size_t print_stack(const stack_t *head)
{
	size_t c = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		c++;
	}

	return (c);
}

