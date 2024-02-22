/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:48:15 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/25 16:16:51 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_l **stack_b, int checker)
{
	t_l	*last_node;
	t_l	*first_node;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	last_node = *stack_b;
	while (last_node->next->next)
		last_node = last_node->next;
	first_node = last_node->next;
	last_node->next = NULL;
	first_node->next = *stack_b;
	*stack_b = first_node;
	if (!checker)
		write(1, "rrb\n", 4);
}
