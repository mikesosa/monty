#include "monty.h"

void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
	int i = 0;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	
	while (op[i].opcode)
	{
		printf("opcode es %s y str es %s\n", op[i].opcode, str);
		
		if (strcmp(op[i].opcode, str) == 0)
		{
			op[i].f(stack, line_cnt);
			return; /* if we found a match, run the function */
		} else {
			printf("No funciona\n");
		}
		i++;
	}
}
