#include "monty.h"

/**
  *glo_f - Free memory variables globals.
  *
  */

void glo_f(void)
{
	stack_t *to_free;
	stack_t *temp = NULL;

	to_free = *glo;

	while (to_free)
	{
		temp = to_free->next;

		free(to_free);

		to_free = temp;
	}

}
