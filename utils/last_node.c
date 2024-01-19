#include "../push_swap.h"

int	last_node(l *stack_a)
{
	l *tmp = stack_a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp->value);
}