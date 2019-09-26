#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;
	stack_t *new;

	if (!stack) /* if we had no stack. this is diff than a !*stack */
		exit(EXIT_FAILURE);
	if (!n || (!isdigit(*n) && !(*n == '-' && isdigit(*(n + 1)))))
	{
		free_stack(stack);
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free_stack(stack);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	add_node(stack, new);
}
