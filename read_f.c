#include "monty.h"

/**
  *read_f - Read file.
  *@file: Filename.
  *@stack: Top to stack.
  *Return: Error or success.
 */

void read_f(char *file, stack_t **stack)
{
	size_t len;
	ssize_t read_line;
	unsigned int num = 0;
	char *line = NULL;
	FILE *fd;
	char *command;

	fd = fopen(file, "r");
	if (!fd)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((read_line = getline(&line, &len, fd)) != -1)
	{
		command = strtok(line, DLS);
		num++;

		if (command)
			parse(stack, command, num);
	}

	if (line)
		free(line);

	fclose(fd);
}
