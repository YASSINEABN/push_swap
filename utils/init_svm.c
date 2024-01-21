#include "../push_swap.h"

void	init_svm( c_stacka **stack ,int *sorted_list)
{
	int st = (*stack)->st;
	(*stack)->max =sorted_list[st] ;
}
