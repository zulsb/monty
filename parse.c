#include "monty.h"

/**
  *parse - Parses commands.
  *@stack: Double pointer
  *@op: Line commands.
  *@line_num: Line number.
 */

void parse(stack_t **stack, char *op, unsigned int line_num)
{
	int s = 0;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
/**		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},*/
		{NULL, NULL}
	};

	for (; ops[s].opcode; s++)
		if (strcmp(op, ops[s].opcode) == 0)
		{
			ops[s].f(stack, line_num);
			return;
		}

	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_num, op);
		exit(EXIT_FAILURE);
	}
}
