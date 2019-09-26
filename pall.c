#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *tmp;

	tmp = *stack; /* used a temp so stack isnt modified */
	while (tmp) /* loop through until NULL, printing everything */
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
}
