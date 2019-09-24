#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * error_usage: prints usage message and exits
 *
 * Return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * error_usage: prints file error message and exits
 *
 * Return: nothing
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * main: entry point
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	FILE *file; /*File that wee neeed to read*/
	size_t buf_len = 0; /*Lenght of the buffer*/
	char *buffer = NULL; /*to store each line of the file*/
	int cnt = 0;
	char *str = NULL; /*to save the argument*/

	if (argc != 2)
		error_usage();

	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);

	while (getline(&buffer, &buf_len, file) != -1)
	{
		cnt++;
		fputs(buffer, stdout);
		str = strtok(buffer, " \t\n");
		printf("string is->%s", str);
	}

	printf("bufflen is %ld------->\n", buf_len);

	fclose(file);
	exit(EXIT_SUCCESS);
}
