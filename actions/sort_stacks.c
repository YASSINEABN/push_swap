/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:42:53 by yaboulan          #+#    #+#             */
/*   Updated: 2024/02/15 09:20:55 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	large_sort(t_l **stack_a, t_l **stack_b, int *sorted_list)
{
	make_stack_b(stack_a, stack_b, sorted_list);
	make_stack_a(stack_a, stack_b, sorted_list);
}
