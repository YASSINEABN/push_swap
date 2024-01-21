#include "../push_swap.h"
void	find_best_move_stack_a(l **stack_a, l **stack_b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		pos++;
		while (pos--)
			apply_actions("rra", stack_a, stack_b);
	}
	else
	{
		while (pos-- > 1)
			apply_actions("ra", stack_a, stack_b);
	}
	apply_actions("pb", stack_a, stack_b);
}
void five_sort(l **stack_a,l **stack_b)
{
    find_best_move_stack_a(stack_a,stack_b,pos(*stack_a,max_list(*stack_a)->value),size(*stack_a));
    find_best_move_stack_a(stack_a,stack_b,pos(*stack_a,max_list(*stack_a)->value),size(*stack_a));
    sorted_list_three(stack_a);
    apply_actions("pa",stack_a,stack_b);
    apply_actions("ra",stack_a,stack_b);
    apply_actions("pa",stack_a,stack_b);
    apply_actions("ra",stack_a,stack_b);
}