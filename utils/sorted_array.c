/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:52 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:46:44 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

int	*sorted_array(l *list)
{
	int	T[2500];
	int	i;

	i = 0;
	while (list)
	{
		T[i++] = list->value;
		list = list->next;
	}
	int j = i;
	i = 0;
	int k;
	int swap;
	while (i < j)
	{
		k = i + 1;
		while (k < j)
		{
			if (T[i] > T[k])
			{
				swap = T[i];
				T[i] = T[k];
				T[k] = swap;
			}
			k++;
		}
		i++;
	}
	int *sortedArray = (int *)malloc(j * sizeof(int));
	i = 0;

	while (i < j)
	{
		sortedArray[i] = T[i];
		i++;
	}

	return (sortedArray);
}
