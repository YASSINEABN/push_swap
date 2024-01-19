/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:06 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 13:40:54 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	make_stack_a(l **stack_a, l **stack_b, int *sorted_list)
{
	int	pos_of_max;
	int	max;
	int	st;
	int	m;
	int	tmp;

	init_coords_stack_a(&m, &st, *stack_b);
	first_push(stack_a, stack_b, sorted_list, &pos_of_max, size(*stack_b), &st);
	while ((*stack_b))
	{
		init_svm(&max, *stack_b, sorted_list, st);
		if (tmp == max && m == 1)
			rotate_tmp(&m, stack_a, stack_b, &st, &max, sorted_list);
		else if (m == 0)
			push_item((*stack_b)->value, max, stack_a, stack_b, &tmp, &m, &st);
		else
			push_max(size(*stack_b), &max, &pos_of_max, stack_a, stack_b, &st,
				sorted_list);
	}
	if (check_lastnode(*stack_a, (*stack_a)->value))
		rotate_stack_large(stack_a);
}
