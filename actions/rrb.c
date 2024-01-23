/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:48:15 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 13:59:22 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(l **stack_a)
{
	l	*last_node;
	l	*first_node;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last_node = *stack_a;
	while (last_node->next->next)
		last_node = last_node->next;
	first_node = last_node->next;
	last_node->next = NULL;
	first_node->next = *stack_a;
	*stack_a = first_node;
	printf("rrb\n");
}
