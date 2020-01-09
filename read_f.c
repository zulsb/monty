#include "monty.h"

/**
  *read_f - Read file.
  *@file: Filename.
  *@stack: Top to stack.
  *Return: Error or success.
 */

void read_f(char *file, stack_t **stack)
{
	size_t lgth;
	ssize_t rl;
	unsigned int nm = 0;
	char *ln = NULL;
	FILE *d;
	char *cmmd;

	d = fopen(file, "r");
	if (!d)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((rl = getline(&ln, &lgth, d)) != -1)
	{
		cmmd = strtok(ln, DLS);
		nm++;

		if (cmmd)
			parse(stack, cmmd, nm);
	}

	if (ln)
		free(ln);

	fclose(d);
}
