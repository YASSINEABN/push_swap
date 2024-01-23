/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coords_stack_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:26 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:53:40 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_coords_stack_a(t_cstacka **stack, t_l *stack_b, int *sorted_list)
{
	(*stack)->m = 0;
	(*stack)->st = size(stack_b) - 1;
	(*stack)->pos_of_max = pos(stack_b, sorted_list[(*stack)->st]);
}
