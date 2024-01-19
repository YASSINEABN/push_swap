/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_tmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:43 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 11:19:44 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_tmp(int *m, l **stack_a, l **stack_b, int *st, int *max,
		int *sorted_list)
{
	*m = 0;
	apply_actions("rra", stack_a, stack_b);
	--*st;
	*max = sorted_list[*st];
}