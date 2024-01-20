/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_tmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:43 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/20 18:45:24 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_tmp(c_stacka **stack, l **stack_a, l **stack_b,
		int *sorted_list)
{
	(*stack)->m = 0;
	apply_actions("rra", stack_a, stack_b);
	--(*stack)->st;
	(*stack)->max = sorted_list[(*stack)->st];
}