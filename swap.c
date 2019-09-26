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
	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	int top = (*stack)->n;
	int before = (*stack)->next->n;

	(*stack)->next->n = top;
	(*stack)->n = before;
}
