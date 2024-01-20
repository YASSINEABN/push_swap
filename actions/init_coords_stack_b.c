/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coords_stack_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:03 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/20 17:04:24 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_coords_stack_b(int i, coords **coords)
{
	int	mid;

	mid = (i / 2) - 1;
	if (i > 100)
		(*coords)->offset = i / 17;
	else
	(*coords)->offset = i / 8;
	(*coords)->start = mid - (*coords)->offset;
	(*coords)->end = mid + (*coords)->offset;
	(*coords)->midd = mid;

}
