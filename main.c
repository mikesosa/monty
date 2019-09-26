#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * error_usage - prints usage message and exits
 *
 * Return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - prints file error message and exits
 * @argv: argv given by manin
 *
 * Return: nothing
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

int status = 0;
/**
 * main - entry point
 * @argv: list of arguments passed to our program
 * @argc: ammount of args
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	FILE *file; /*File that wee neeed to read*/
	size_t buf_len = 0; /*Lenght of the buffer*/
	char *buffer = NULL; /*to store each line of the file*/
	char *str = NULL; /*to save the argument*/
	stack_t *stack = NULL;/*The double linked list*/
	unsigned int line_cnt = 1; /*Line counter*/

	if (argc != 2)
		error_usage();

	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);

	while (getline(&buffer, &buf_len, file) != -1)
	{
		if (status)
			break;
		if (*buffer == '\n')/*If the line onl contains a new line char, ignore it*/
		{
			line_cnt++;
			continue;
		}
		str = strtok(buffer, " \t\n");
		if (!str)/*If reach null because no more tokens*/
		{
			line_cnt++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n"); /*store next string of the token*/
		opcode(&stack, str, line_cnt);
		line_cnt++;
	}
	free_stack(&stack);
	free(buffer);
	fclose(file);
	exit(EXIT_SUCCESS);
}
