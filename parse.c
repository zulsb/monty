#include "monty.h"

/**
  *parse - Parses commands.
  *@stack: Double pointer
  *@op: Line commands.
  *@line_number: Line number.
 */

void parse(stack_t **stack, char *op, unsigned int line_number)
{
	int s;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	for (s = 0; ops[s].opcode; s++)
		if (strcmp(op, ops[s].opcode) == 0)
		{
			ops[s].f(stack, line_number);
			return;
		}

	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
