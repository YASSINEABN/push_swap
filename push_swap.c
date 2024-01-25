/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:24:34 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/24 15:58:42 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	free_stacks(t_l **stack)
{
	t_l	*tmp;
	t_l	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	check_list(t_l **stack_a, t_l **stack_b, int size, int *sl)
{
	if (size == 2)
		sa(stack_a, 0);
	else if (size == 3)
		sorted_list_three(stack_a);
	else if (size == 5)
		five_sort(stack_a, stack_b);
	else
		large_sort(stack_a, stack_b, sl);
}

void	init_stacks(t_l **stack_a, t_l **stack_b)
{
	*stack_a = NULL;
	*stack_b = NULL;
}

int	main(int argc, char *argv[])
{
	t_l	*stack_a;
	t_l	*stack_b;
	int	*sl;

	init_stacks(&stack_a, &stack_b);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else
		init_stack_a(&stack_a, argv + 1 , argc);
	sl = sorted_array(stack_a);
	if (!sorted_list(stack_a))
		check_list(&stack_a, &stack_b, size(stack_a), sl);
	free_stacks(&stack_a);
	free(sl);
	return (0);
}
