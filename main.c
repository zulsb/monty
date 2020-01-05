#include "monty.h"

stack_t **glo;

/**
  *main - Function principal.
  *@argc: Numbers of arguments.
  *@argv: Opcode file.
  *Return: 0.
  */

int main(int argc, char **argv)
{
	stack_t *head;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	glo = &head;

	read_f(argv[1], &head);

	atexit(glo_f);

	exit(EXIT_SUCCESS);
}
