/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:07 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:52:38 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_best_move(t_l **stack_a, t_l **stack_b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		pos++;
		while (pos--)
			apply_actions("rrb", stack_a, stack_b);
	}
	else
	{
		while (pos-- > 1)
			apply_actions("rb", stack_a, stack_b);
	}
	apply_actions("pa", stack_a, stack_b);
}
