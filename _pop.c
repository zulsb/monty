#include "monty.h"

/**
  *pop - Removes the top element of the stack.
  *@stack: Double pointer stack.
  *@line_number: Number in file.
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tm;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tm = *stack;
	*stack = (*stack)->next;

	free(tm);
}
