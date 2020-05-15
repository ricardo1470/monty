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

	if (*stack == NULL || stack == NULL || !(stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	pchar_var = (*stack)->n;
	if ((pchar_var > 127) || (pchar_var < 0))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free(var.buff);
		free_stack(*stack);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", pchar_var);
}

/**
 * pstr_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void pstr_init(stack_t **stack, unsigned int line_number)
{
	stack_t *node_pstr = *stack;
	(void)line_number;

	while (node_pstr && node_pstr->n != '\0')
	{
		if ((node_pstr->n > 127) || (node_pstr->n < 0))
		{
			break;
		}
		printf("%c", node_pstr->n);
		node_pstr = node_pstr->next;
	}
	putchar('\n');
}

/**
 * rotl_init - Entry point
 * @stack: pointer value
 * @line_number: value
 * Return: Always 0 (Success)
 */
void rotl_init(stack_t **stack, unsigned int line_number)
{
	int rotl_var;
	(void)line_number;

	rotl_var = (*stack)->n;
	if (*stack)
	{
		add_dnode_end(stack, rotl_var);
		pop_init(stack, line_number);
	}
}
