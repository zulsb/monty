#include "monty.h"

/**
  *glo_f - Free memory variables globals.
  *
  */

void glo_f(void)
{
	stack_t *t;
	stack_t *tm = NULL;

	t = *glo;

	while (t)
	{
		tm = t->next;
		free(t);
		t = tm;
	}

}

/**
 * fstack - frees the stack
 * @stack: pointer to the stack
 * Return: Nothing
 */
void fstack(stack_t **stack)
{
	stack_t *h;
	stack_t *tm;

	h = *stack;
	while (h)
	{
		tm = h;
		h = h->next;
		free(tm);
	}
}
