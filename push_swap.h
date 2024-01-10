
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

void print_actions(char* str);
int sorted_list(l* list);
void sorted_list_three(l** list);
void swap_stack(l** list);
void check_min(l** list, int pos);
void check_max(l** list, int pos);
l* min_list(l* list);
int pos_list(int max, l* list);
l* max_list(l* list);
void rotate_stack(l** list);
void revrot_stack(l** list);
int *sorted_array(l *list);
void push_a(l **stack_a, l **stack_b);
void push_b(l **stack_a, l **stack_b);
void rotate_stack_large(l **stack_a);


#endif
