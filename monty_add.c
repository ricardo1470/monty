#include "monty.h"

/**
 * add_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void add_init(stack_t **stack, unsigned int line_number)
{
	int add_var;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	add_var = (*stack)->n + (*stack)->next->n;
	pop_init(&(*stack), line_number);
	(*stack)->n = add_var;
}

/**
 * sub_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void sub_init(stack_t **stack, unsigned int line_number)
{
	int add_var;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	add_var = (*stack)->next->n - (*stack)->n;
	pop_init(&(*stack), line_number);
	(*stack)->n = add_var;
}

/**
 * div_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void div_init(stack_t **stack, unsigned int line_number)
{
	int div_var;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	
	div_var = (*stack)->next->n / (*stack)->n;
	pop_init(&(*stack), line_number);
	(*stack)->n = div_var;
}
