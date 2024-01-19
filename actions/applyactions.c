/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyactions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:00 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 11:19:01 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "string.h"

void	apply_actions(char *action, l **stack_a, l **stack_b)
{
	if (!strcmp(action, "pb"))
	{
		printf("pb \n");
		push_b(stack_a, stack_b);
	}
	if (!strcmp(action, "pa"))
	{
		printf("pa \n");
		push_a(stack_a, stack_b);
	}
	if (!strcmp(action, "ra"))
	{
		printf("ra \n");
		rotate_stack(stack_a);
	}
	if (!strcmp(action, "rb"))
	{
		printf("rb \n");
		rotate_stack(stack_b);
	}
	if (!strcmp(action, "rrb"))
	{
		printf("rrb \n");
		rotate_stack_large(stack_b);
	}
	if (!strcmp(action, "rra"))
	{
		printf("rra \n");
		rotate_stack_large(stack_a);
	}
	if (!strcmp(action, "rr"))
	{
		printf("rr \n");
		rotate_stack_both(stack_a, stack_b);
	}
}