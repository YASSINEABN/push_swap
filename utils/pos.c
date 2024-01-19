#include "../push_swap.h"

int	pos(l *stack_a, int value)
{
	int pos = 1;
	while (stack_a)
	{
		if (stack_a->value == value)
			return (pos);
		pos++;
		stack_a = stack_a->next;
	}
	return (0);
}