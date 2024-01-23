/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:48 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:43:49 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_coords(coords **coords, int i)
{
	(*coords)->start -= (*coords)->offset;
	if ((*coords)->start < 0)
		(*coords)->start = 0;

	(*coords)->end += (*coords)->offset;
	if ((*coords)->end == i)
		(*coords)->end = i - 1;
}