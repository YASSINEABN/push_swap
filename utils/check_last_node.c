#include "../push_swap.h"

int	check_lastnode(l *stack_a, int a)
{
	while (stack_a->next)
	{
		stack_a = stack_a->next;
	}
	if (stack_a->value > a)
		return (0);
	else
		return (1);
}