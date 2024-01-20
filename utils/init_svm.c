#include "../push_swap.h"

void	init_svm( c_stacka **stack ,l *stack_b,int *sorted_list)
{
	int st = (*stack)->st;
	(*stack)->max =sorted_list[st] ;
}
