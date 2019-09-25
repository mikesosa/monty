#include "monty.h"

void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	FILE *file; /*File that wee neeed to read*/
	size_t buf_len = 0; /*Lenght of the buffer*/
	char *buffer = NULL; /*to store each line of the file*/
	char *str = NULL; /*to save the argument*/
	stack_t *stack = NULL;/*The double linked list*/
	unsigned int line_cnt = 0; /*Line counter*/

	if (argc != 2)
		error_usage();

	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);

	while (getline(&buffer, &buf_len, file) != -1)
	{
		if(*buffer == '\n')/*If the line onl contains a new line char, ignore it*/
		{
			line_cnt++;
			continue;
		}

		line_cnt++;
		str = strtok(buffer, " \t\n");
		opcode(&stack, str, line_cnt);
	}
	fclose(file);
	exit(EXIT_SUCCESS);
}
