/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:06 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/20 18:52:34 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_stack_a(l **stack_a, l **stack_b, int *sorted_list)
{
		int	pos_of_max;
	// int	max;
	//  int	st;
	// int	m;
	// int	tmp;
	c_stacka *coords = malloc(sizeof(c_stacka));

	init_coords_stack_a(&coords, *stack_b);
	first_push(stack_a, stack_b, sorted_list,  &coords);
	pos_of_max = pos(*stack_b, sorted_list[coords->st]);
	while ((*stack_b))
	{
		init_svm(&coords, *stack_b, sorted_list);
		if (coords->tmp == coords->max && coords->m == 1)
			rotate_tmp(&coords, stack_a, stack_b ,sorted_list);
		else if (coords->m == 0)
			push_item( stack_a, stack_b,&coords);
		else
			push_max(&coords, &pos_of_max, stack_a, stack_b,sorted_list);
	}
	if (check_lastnode(*stack_a, (*stack_a)->value))
		rotate_stack_large(stack_a);
}
