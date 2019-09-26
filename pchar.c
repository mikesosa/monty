#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_cnt)
{
	char c;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (!((*stack)->n >= 64) || !((*stack)->n <= 128))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	c = (*stack)->n;
	printf("%c\n", c);
}
