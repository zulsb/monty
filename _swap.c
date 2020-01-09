#include "monty.h"

/**
  *swap - Swaps the top two elements of the stack.
  *@stack: Double pointer stack.
  *@line_number: Number in file.
  *
  */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tm;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tm = (*stack)->next;

	(*stack)->prev = tm;
	(*stack)->next = tm->next;

	tm->prev = NULL;

	if (tm->next)
		tm->next->prev = *stack;

	tm->next = *stack;

	*stack = tm;
}
