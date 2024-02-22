/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:38:14 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/25 16:32:38 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_best_move_stack_aa(t_l **stack_a, t_l **stack_b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		pos++;
		while (pos--)
			rra(stack_a, 0);
	}
	else
	{
		while (pos-- > 1)
			apply_actions("ra", stack_a, stack_b);
	}
	pb(stack_a, stack_b, 0);
}

void	four_sort(t_l **stack_a, t_l **stack_b)
{
	t_l	*min;

	min = min_list(*stack_a);
	find_best_move_stack_aa(stack_a, stack_b, pos(*stack_a, min->value),
		size(*stack_a));
	free(min);
	sorted_list_three(stack_a);
	pa(stack_a, stack_b, 0);
}
