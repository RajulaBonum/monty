#include "monty.h"
/**Print list */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (!tmp)
		return;
	while (tmp)							
	{

		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
