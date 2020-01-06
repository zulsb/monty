#include "monty.h"

/**
  *_pint - value at the top stack.
  *@stack: Double pointer.
  *@line_number: Line number.
  */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == '\0' || *stack == '\0')
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
