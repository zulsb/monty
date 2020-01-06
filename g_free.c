#include "monty.h"

/**
  *glo_f - Free memory variables globals.
  *
  */

void glo_f(void)
{
	stack_t *t;
	stack_t *tmp;

	*tmp = NULL;
	t = *glo;

	while (t)
	{
		tmp = t->next;
		free(t);
		t = tmp;
	}

}
