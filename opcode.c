#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack given by main
 * @str: string to compare
 * @line_cnt: ammount of lines
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
	int i = 0;
	char *cmp;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		cmp = malloc(sizeof(*cmp) * strlen(op[i].opcode) + 1);
		memcpy(cmp, str, strlen(op[i].opcode));
		cmp[strlen(op[i].opcode)] = 0;
		if (strcmp(op[i].opcode, cmp) == 0)
		{
			op[i].f(stack, line_cnt);
			free(cmp);
			return; /* if we found a match, run the function */
		}
		i++;
		free(cmp);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);
	status = EXIT_FAILURE;
}
