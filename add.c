#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @line_cnt: line counter
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_cnt)
{
	int top_n = (*stack)->n;
	int next_n = (*stack)->next->n;
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (top_n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = next_n + top_n;
	pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}
