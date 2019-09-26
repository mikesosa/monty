#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap -  swaps data from top to previous
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_cnt)
{
	int cnt = 0;
	stack_t *tmp = NULL;

	tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		cnt++;
	}

	if (cnt < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
	(*stack)->prev = NULL;
}
