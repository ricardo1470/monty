#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * struct var_s - Entry point
 * @n: integer
 * @buff: pointer value
 * @fd: pointer value
 * Description: none
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct var_s
{
	FILE *fd;
	char *buff;
	char *n;
} var_t;

extern var_t var;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t *add_dnodeint_end(stack_t **head, char *n);
stack_t *add_dnodeint(stack_t **head, char *n);
int _isdigit(void);
void(*get(char *s, unsigned int l))(stack_t **stack, unsigned int line_number);
void push_init(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void pall_init(stack_t **stack, unsigned int line_number);
void pint_init(stack_t **stack, unsigned int line_number);
void pop_init(stack_t **stack, unsigned int line_number);
void swap_init(stack_t **stack, unsigned int line_number);
void add_init(stack_t **stack, unsigned int line_number);
void sub_init(stack_t **stack, unsigned int line_number);
void div_init(stack_t **stack, unsigned int line_number);
void mul_init(stack_t **stack, unsigned int line_number);
void mod_init(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H*/
