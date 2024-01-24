/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:46 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/24 11:50:51 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_l **list, int checker)
{
	int	val;

	val = (*list)->value;
	(*list)->value = (*list)->next->value;
	(*list)->next->value = val;
	if (!checker)
		write(1, "sb\n", 3);
}
