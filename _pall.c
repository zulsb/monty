#include "monty.h"

/**
  *_pall - All values from the stack.
  *@stack: Double pointer stack.
  *@line_number: Line number.
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *p = *stack;

	(void) line_number;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
