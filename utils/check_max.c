#include "../push_swap.h"

void	check_max(l **list, int pos)
{
	if (pos == 0)
	{
		printf("ra \n");
		rotate_stack(list);
	}
	else if (pos == 1)
	{
		rotate_stack_large(list);
		printf("rra \n");
	}
}
