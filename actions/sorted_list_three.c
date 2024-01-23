/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_list_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:40:59 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:51:21 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorted_list_three(t_l **list)
{
	t_l	*node_min;
	t_l	*node_max;
	int	pos_max;
	int	pos_min;

	node_min = min_list(*list);
	node_max = max_list(*list);
	while (list && !sorted_list(*list))
	{
		pos_max = pos_list(node_max->value, *list);
		check_max(list, pos_max);
		if (sorted_list(*list))
			break ;
		pos_min = pos_list(node_min->value, *list);
		check_min(list, pos_min);
	}
	free(node_max);
	free(node_min);
}
