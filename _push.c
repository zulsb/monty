#include "monty.h"

/**
  *push - New node of the stack.
  *@stack: Double pointer of the stack.
  *@line_number: Line number.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *nmbr;

	nmbr = strtok(NULL, DLS);
	if (nmbr == NULL)
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

	new->n = atoi(nmbr);
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;

}
