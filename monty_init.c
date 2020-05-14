#include "monty.h"

/**
 * get - Entry point
 * @s: string
 * @l: line_number
 * Return: Always 0 (Success)
 */
void (*get(char *s, unsigned int l))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t idx[] = {
		{"push", push_init},
		{"pall", pall_init},
		{"pint", pint_init},
		{"pop", pop_init},
		{"swap", swap_init},
		{"add", add_init},
		{"sub", sub_init},
		{"div", div_init},
		{"mul", mul_init},
		{"mod", mod_init},
		{NULL, NULL}
	};
	(void)l;

	for (i = 0; idx[i].opcode != NULL; i++)
	{
		if (!strcmp(s, idx[i].opcode))
		{
			return (idx[i].f);
		}
	}
	return (NULL);
}
