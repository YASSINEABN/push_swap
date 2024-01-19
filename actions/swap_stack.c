/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:46 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 11:34:22 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_stack(l **list)
{
	int	val;

	val = (*list)->value;
	(*list)->value = (*list)->next->value;
	(*list)->next->value = val;
}
