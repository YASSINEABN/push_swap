/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:18:52 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 17:11:32 by yaboulan         ###   ########.fr       */
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
void    apply_actions(char *action ,l **stack_a, l **stack_b);
void push_a(l **stack_a, l **stack_b);
void push_b(l **stack_a, l **stack_b);
void rotate_stack_large(l **stack_a);
int sorted_list(l* list);
void sorted_list_three(l** list);
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
int	check_value(int *p, int start, int end, int a);
int size(l *list);
int pos(l *stack_a, int value);
int check_list_value(l *stack_a , int start ,int end , int *p );
void find_best_move(l **stack_a, l **stack_b , int pos, int size);
void	check_coords(int *start, int offset, int *end, l **stack_a,int i);
void	init_coords_stack_b(int i, int *offset, int *start, int *end);
void do_something(int *test , l **stack_a,l**stack_b,int start , int end , int *sorted_list );
void make_stack_b(l **stack_a,l **stack_b ,int *sorted_list);
 void init_coords_stack_a(int *m  , int *st , l *stack_b);
 int last_node(l *stack_a);
 void first_push( l **stack_a , l **stack_b,int *sorted_list,int *pos_of_max, int size_stack_b,int *st);
void rotate_tmp(int *m , l **stack_a , l **stack_b , int *st , int *max,int *sorted_list);
void push_max(int size_stack_b , int *max , int *pos_of_max , l **stack_a , l **stack_b , int *st , int *sorted_list);
void push_item(int val , int max , l **stack_a , l **stack_b , int *tmp , int *m , int *st);
void	init_svm(int *max, l *stack_b,int *sorted_list, int st);
void make_stack_a(l **stack_a,l **stack_b, int *sorted_list);
int check_mid(int val , int *p , int mid , int *t);
#endif
