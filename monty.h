#ifndef MONTY_H
#define MONTY_H

#include <stddef.h> 
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

/**
* struct help_struck - the arguments and other things we might need
* @argument: the arguments of the string
*
* Description: global structure used to pass data around the functions easily
*/
typedef struct help_struck
{
	char *argument;
} help_struck;
help_struck global;


void push(stack_t **stack, unsigned int line_cnt);
void pall(stack_t **stack, unsigned int line_cnt);
void pint(stack_t **stack, unsigned int line_cnt);
void opcode(stack_t **stack, char *str, unsigned int line_cnt);

int isnumber(char *str);

stack_t *add_node(stack_t **head, const int n);
size_t print_stack(const stack_t *head);

#endif /* MONTY_H */
