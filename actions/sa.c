/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:46 by yaboulan          #+#    #+#             */
/*   Updated: 2024/02/14 15:06:12 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_l **list, int checker)
{
	int	val;

	if (!*(list) || !(*list)->next)
		return ;
	val = (*list)->value;
	(*list)->value = (*list)->next->value;
	(*list)->next->value = val;
	if (!checker)
		write(1, "sa\n", 3);
}
