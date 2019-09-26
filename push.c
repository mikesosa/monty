#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @line_cnt: ammount ofhttps://github.com/mikesosa/monty/pull/7/conflict?name=push.c&ancestor_oid=f09070fea994d4cdb91dcdd7c23978b51699a6b8&base_oid=58445bf3bb72c9d46ab21db4b7b65ee4a95bdf01&head_oid=cd63ca58b33d7a2bbd9aa41861a121fea9339bd0 lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if (!n || (!isdigit(*n) && !(*n == '-' && isdigit(*(n + 1)))))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	if (!add_node(stack, atoi(global.argument)))
	{
		fprintf(stderr, "Error: malloc failed\n");
		status = EXIT_FAILURE;
		return;
	}
}
