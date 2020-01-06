#include "monty.h"

stack_t **glo;

/**
  *main - Function principal.
  *@argc: Numbers of arguments.
  *@argv: Opcode file.
  *Return: nothing.
  */

int main(int argc, char **argv)
{
	stack_t *prin;

	prin = NULL;
	glo = &prin;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_f(argv[1], &prin);

	atexit(glo_f);

	exit(EXIT_SUCCESS);
}
