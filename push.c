#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if (!isdigit(*n))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		status = EXIT_FAILURE;
	}

	if (!add_node(stack, atoi(n)))
	{
		fprintf(stderr, "Error: malloc failed\n");
		status = EXIT_FAILURE;
	}
}
