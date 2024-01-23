/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_item.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:45 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:55:16 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_item(t_l **stack_a, t_l **stack_b, t_cstacka **stack)
{
	int	val;

	val = (*stack_b)->value;
	if (val != (*stack)->max)
	{
		apply_actions("pa", stack_a, stack_b);
		apply_actions("ra", stack_a, stack_b);
		(*stack)->m = 1;
		(*stack)->tmp = val;
	}
	else
	{
		apply_actions("pa", stack_a, stack_b);
		(*stack)->st--;
	}
}
