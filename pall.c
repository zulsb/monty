#include "monty.h"

/**
  *_pall - All values from the stack.
  *@stack: Double pointer stack.
  *@line_number: Line number.
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tp = *stack;

	(void) line_number;

	while (tp)
	{
		printf("%d\n", tp->n);
		tp = tp->next;
	}
}
