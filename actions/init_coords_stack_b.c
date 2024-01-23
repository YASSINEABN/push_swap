/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coords_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:03 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:26:16 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_coords_stack_b(int i, t_coords **coord)
{
	int	mid;

	*coord = malloc(sizeof(t_coords));
	mid = (i / 2) - 1;
	if (i > 100)
		(*coord)->offset = i / 17;
	else
		(*coord)->offset = i / 6;
	(*coord)->start = mid - (*coord)->offset;
	(*coord)->end = mid + (*coord)->offset;
	(*coord)->midd = mid;
}
