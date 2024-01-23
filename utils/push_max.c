/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:48 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:55:31 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_max(t_cstacka **stack, t_l **stack_a, t_l **stack_b,
		int *sorted_list)
{
	(*stack)->max = sorted_list[(*stack)->st];
	(*stack)->pos_of_max = pos(*stack_b, (*stack)->max);
	find_best_move(stack_a, stack_b, (*stack)->pos_of_max, size(*stack_b));
	(*stack)->st--;
}
