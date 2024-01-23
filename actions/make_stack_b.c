/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:09 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/20 15:12:58 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_stack_b(l **stack_a, l **stack_b, int *sorted_list)
{
	coords	*coords;

	init_coords_stack_b(size(*stack_a), &coords);
	while (1)
	{
		if (check_value(sorted_list, coords, (*stack_a)->value))
			do_something(stack_a, stack_b, coords, sorted_list);
		else
			apply_actions("ra", stack_a, stack_b);
		if (!check_list_value(*stack_a, coords, sorted_list))
			check_coords(&coords, size(*stack_a) + size(*stack_b));
		if ((*stack_a) == NULL)
			break ;
	}
	free(coords);
}
