/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:06 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:12:10 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_stack_a(l **stack_a, l **stack_b, int *sorted_list)
{
	c_stacka	*coords;

	coords = malloc(sizeof(c_stacka));
	init_coords_stack_a(&coords, *stack_b, sorted_list);
	first_push(stack_a, stack_b, sorted_list, &coords);
	while ((*stack_b))
	{
		init_svm(&coords, sorted_list);
		if (coords->tmp == coords->max && coords->m == 1)
			rotate_tmp(&coords, stack_a, stack_b, sorted_list);
		else if (coords->m == 0)
			push_item(stack_a, stack_b, &coords);
		else
			push_max(&coords, stack_a, stack_b, sorted_list);
	}
	if (check_lastnode(*stack_a, (*stack_a)->value))
		rra(stack_a);
	free(coords);
}
