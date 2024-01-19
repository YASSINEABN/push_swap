#include "../push_swap.h"

int	check_list_value(l *stack_a, int start, int end, int mid, int *p)
{
	int k = 1;
	int a;
	while (stack_a)
	{
		a = stack_a->value;
		if (check_value(p, start, end, stack_a->value, &k, mid))
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}