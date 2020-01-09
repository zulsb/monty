#include "monty.h"

/**
  *add - Adds the top two elements of the stack.
  *@stack: Double pointer stack.
  *@line_number: Number in file.
  *
  */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tm;
	int sm;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tm = *stack;

	sm = tm->n + tm->next->n;
	tm->next->n = sm;

	*stack = tm->next;

	free(tm);
}
