#include "monty.h"
/**
 * add_dnodeint - Entry point.
 * @head: pointer to the head.
 * @n: value
 * Return: Always 0 (Success)
 */
stack_t *add_dnodeint(stack_t **head, char *n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf (stderr, "Error: malloc failed");
		free(var.buff);
		free_stack(*head);
		fclose(var.fd);
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(n);
	new_node->prev = NULL;

	if (!(*head))
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
