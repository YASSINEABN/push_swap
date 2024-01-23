/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_svm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:31 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:20 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_svm(t_cstacka **stack, int *sorted_list)
{
	int	st;

	st = (*stack)->st;
	(*stack)->max = sorted_list[st];
}
