/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:02 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:52:11 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_value(int *p, t_coords *coords, int a)
{
	int	start;

	start = coords->start;
	while (start <= coords->end)
	{
		if (p[start] == a)
			return (1);
		start++;
	}
	return (0);
}
