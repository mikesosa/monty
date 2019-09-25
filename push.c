#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = strtok(NULL, " \t\n");

	if (isnumber(n))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	if (!add_node(stack, atoi(n)))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
