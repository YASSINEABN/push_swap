#include "../push_swap.h"

int	check_list_value(l *stack_a, coords *coords, int *p)
{
	int a;
	while (stack_a)
	{
		a = stack_a->value;
		if (check_value(p,coords, stack_a->value))
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}