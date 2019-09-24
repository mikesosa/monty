#include "monty.h"

void errorUsage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void fileError(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	FILE *file; /*File that wee neeed to read*/
	size_t bufLen = 0; /*Lenght of the buffer*/
	char *buffer = NULL; /*to store each line of the file*/
	int cnt = 0;
	char *str = NULL; /*to save the argument*/

	if (argc != 2)
		errorUsage();

	file = fopen(argv[1], "r");

	if (!file)
		fileError(argv[1]);

	while (getline(&buffer, &bufLen, file) != -1)
	{
		cnt++;
		fputs(buffer, stdout);
		str = strtok(buffer, " \t\n");
		printf("string is->%s", str);

	}
	
	printf("bufflen is %ld------->\n", bufLen);
	
	fclose(file);
	exit(EXIT_SUCCESS);
}
