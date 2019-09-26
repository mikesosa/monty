#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _div - divides the next top value by the top value
 * @stack: stack given by main
 * @line_cnt: line counter
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_cnt)
{
	int top_n = (*stack)->n;
	int next_n = (*stack)->next->n;
	int result;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (top_n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	result = next_n / top_n;
	pop(stack, line_cnt);/*For top node*/
	pop(stack, line_cnt);/*For the next node*/
	add_node(stack, result);
}
