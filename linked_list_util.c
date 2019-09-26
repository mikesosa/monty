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
void add_node(stack_t **head, stack_t *new)
{
	new->n = atoi(global.argument);
	if (!*head) /* no stack exist. add new as only element */
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{ /* add new to the top! */
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
}

/**
 * free_stack - frees a dlistint_t linked list
 * @stack: list head
 *
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp;

	if (!stack)
		return;

	while (*stack)
	{

		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
