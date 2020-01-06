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
