#include "monty.h"

/**
 * pchar_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void pchar_init(stack_t **stack, unsigned int line_number)
{
	int pchar_var;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	pchar_var = (*stack)->n;
	if (pchar_var > 127 || pchar_var < 0)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", pchar_var);
}
