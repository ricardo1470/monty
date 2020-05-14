#include "monty.h"
var_t var = {NULL, NULL, 0};
/**
 * 
 * 
 */
int main(int argc, char *argv[])
{
	char *len_word = NULL;
	size_t buff_size;
	unsigned int cont_line = 0;
	stack_t *stack = NULL;
	void (*push_two)(stack_t **stack, unsigned int line_number) = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	var.fd = fopen(argv[1], "r");
	if (!var.fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&var.buff, &buff_size, var.fd) != EOF)
	{
		cont_line++;
		len_word = strtok(var.buff, "\t\n ");
		if (len_word != NULL && len_word[0] != '#')
		{
			push_two = get(len_word, cont_line);
			if (!push_two)
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", cont_line, len_word);
				free_stack(stack);
				free(var.buff);
				fclose(var.fd);
				exit(EXIT_FAILURE);
			}
			var.n = strtok(NULL, "\t\n ");
			push_two(&stack, cont_line);
		}
		/* free(var.buff); */	
	}
	fclose(var.fd);
	free(var.buff);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}
/**
 * 
 * 
 * 
 */
void free_stack(stack_t *stack)
{
	if (stack)
	{
		free_stack(stack->next);
		free(stack);
	}
}
