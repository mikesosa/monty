#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void swap(stack_t **stack, unsigned int line_cnt)
{
	if(!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	int top = (*stack)->n;
	int before = (*stack)->next->n;

	(*stack)->next->n = top;
	(*stack)->n = before;
}
