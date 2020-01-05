#include "monty.h"

/**
  *_push - New node of the stack.
  *@stack: Double pointer of the stack.
  *@line_number: Line number.
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *number;

	number = strtok(NULL, DELIMS);
	if (number == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(number);
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;

}
