/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:18:52 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/21 11:11:26 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct List {
    int value;
    struct List* next;
} l;
typedef struct coords
{
    int midd;
    int offset;
    int start;
    int end;
}coords;
typedef struct coords_stack_a
{
        int max; 
    int st;
    int tmp;
    int m;
    int	pos_of_max;
}c_stacka;

void    apply_actions(char *action ,l **stack_a, l **stack_b);
void push_a(l **stack_a, l **stack_b);
void push_b(l **stack_a, l **stack_b);
void rotate_stack_large(l **stack_a);
int sorted_list(l* list);
void    sorted_list_three(l **list);
void swap_stack(l** list );
void check_min(l** list, int pos);
void check_max(l** list, int pos);
l* min_list(l* list);
int pos_list(int max, l* list);
l* max_list(l* list);
void rotate_stack(l** list );
void revrot_stack(l** list);
int *sorted_array(l *list);
void rotate_stack_both(l **stack_a , l **satck_b);
void ft_list_new(l **list , int a);
int check_lastnode(l *stack_a , int a);
int	check_value(int *p, coords *coords, int a);
int size(l *list);
int pos(l *stack_a, int value);
int	check_list_value(l *stack_a, coords *coords, int *p);
void find_best_move(l **stack_a, l **stack_b , int pos, int size);
void	check_coords(coords **coords,int i);
void	init_coords_stack_b(int i, coords **coords);
void do_something(l **stack_a,l**stack_b,coords *coords, int *sorted_list );
void make_stack_b(l **stack_a,l **stack_b ,int *sorted_list);
void	init_coords_stack_a(c_stacka **stack, l *stack_b, int *sorted_list);
 int last_node(l *stack_a);
 void first_push( l **stack_a , l **stack_b,int *sorted_list,c_stacka **stack);
void	rotate_tmp(c_stacka **stack, l **stack_a, l **stack_b,int *sorted_list);
void	push_max( c_stacka **stack , l **stack_a, l **stack_b, int *sorted_list);
void	push_item(l **stack_a, l **stack_b,c_stacka **stack );
void	init_svm( c_stacka **stack,int *sorted_list);
void make_stack_a(l **stack_a,l **stack_b, int *sorted_list);
void five_sort(l **stack_a,l **stack_b);



#endif
