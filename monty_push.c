#include "monty.h"

/**
 * push_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void push_init(stack_t **stack, unsigned int line_number)
{
	int check_digit;

	check_digit = _isdigit();
	if (check_digit == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	add_dnodeint(&(*stack), var.n);
}

/**
 * pall_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void pall_init(stack_t **stack, unsigned int line_number)
{
	stack_t *node_pall = *stack;
	(void)line_number;

	while (node_pall)
	{
		printf("%d\n", node_pall->n);
		node_pall = node_pall->next;
	}
}
