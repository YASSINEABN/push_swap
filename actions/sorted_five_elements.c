/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_five_elements.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:38:14 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:26:29 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_best_move_stack_a(t_l **stack_a, t_l **stack_b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		pos++;
		while (pos--)
			rra(stack_a);
	}
	else
	{
		while (pos-- > 1)
			apply_actions("ra", stack_a, stack_b);
	}
	pb(stack_a, stack_b);
}

void	five_sort(t_l **stack_a, t_l **stack_b)
{
	t_l	*max;

	max = max_list(*stack_a);
	find_best_move_stack_a(stack_a, stack_b, pos(*stack_a, max->value),
		size(*stack_a));
	free(max);
	max = max_list(*stack_a);
	find_best_move_stack_a(stack_a, stack_b, pos(*stack_a, max->value),
		size(*stack_a));
	sorted_list_three(stack_a);
	pa(stack_a, stack_b);
	apply_actions("ra", stack_a, stack_b);
	pa(stack_a, stack_b);
	apply_actions("ra", stack_a, stack_b);
	free(max);
}
