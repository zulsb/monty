#include "monty.h"

/**
  *read_f - Read file.
  *@f: Filename.
  *@stack: Top to stack.
  *Return: Error or success.
 */

void read_f(char *f, stack_t **stack)
{
	size_t lgth;
	unsigned int nm = 0;
	char *ln = NULL;
	char *cmmd;
	ssize_t rd_ln;
	FILE *d;

	d = fopen(f, "r");
	if (!d)
	{
		printf("Error: Can't open file %s\n", f);
		exit(EXIT_FAILURE);
	}

	while ((rd_ln = getline(&ln, &lgth, d)) != -1)
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
