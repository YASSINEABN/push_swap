/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:09 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 13:48:26 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_stack_b(l **stack_a, l **stack_b, int *sorted_list)
{
	int	offset;
	int	mid;
	int	start;
	int	end;
	int	test;

	init_coords_stack_b(size(*stack_a), &offset, &mid, &start, &end, &test,
		*stack_a);
	while (1)
	{
		test = 0;
		
		if (check_value(sorted_list, start, end, (*stack_a)->value, &test, mid))
			do_something(&test, stack_a, stack_b, start, end, mid, sorted_list);
		else
			apply_actions("ra", stack_a, stack_b);
		if (!check_list_value(*stack_a, start, end, mid, sorted_list))
			check_coords(&start, offset, &end, stack_a, size(*stack_a) + size(*stack_b));
		if ((*stack_a) == NULL)
			break ;
	}
}
