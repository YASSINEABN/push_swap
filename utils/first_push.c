/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:10 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 15:55:35 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_push(l **stack_a, l **stack_b, int *sorted_list, c_stacka **stack)
{
	int	st;

	st = (*stack)->st;
	find_best_move(stack_a, stack_b, pos(*stack_b, sorted_list[st]),
		size(*stack_b));
	(*stack)->st--;
}
