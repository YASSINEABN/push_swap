/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coords_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:03 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 11:57:42 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_coords_stack_b(int i, int *offset, int *mid, int *start, int *end,
		int *test, l *stack_a)
{
	*mid = (i / 2) - 1;
	if (i > 100)
		*offset = i / 18;
	else
		*offset = i / 8;
	*start = *mid - *offset;
	*end = *mid + *offset;
	*test = 0;
}
