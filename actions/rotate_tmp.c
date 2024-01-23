/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_tmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:43 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:50:23 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_tmp(t_cstacka **stack, t_l **stack_a, t_l **stack_b,
		int *sorted_list)
{
	(*stack)->m = 0;
	apply_actions("rra", stack_a, stack_b);
	--(*stack)->st;
	(*stack)->max = sorted_list[(*stack)->st];
}
