/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyactions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:00 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:43:26 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "string.h"

void	apply_actions(char *action, l **stack_a, l **stack_b)
{
	if (!strcmp(action, "pb"))
		pb(stack_a, stack_b);
	if (!strcmp(action, "pa"))
		pa(stack_a, stack_b);
	if (!strcmp(action, "ra"))
	{
		printf("ra\n");
		ra(stack_a);
	}
	if (!strcmp(action, "rb"))
	{
		printf("rb\n");
		rb(stack_b);
	}
	if (!strcmp(action, "rrb"))
		rrb(stack_b);
	if (!strcmp(action, "rra"))
		rra(stack_a);
	if (!strcmp(action, "rr"))
		rr(stack_a, stack_b);
	if (!strcmp(action, "sa"))
		sa(stack_a);
}
