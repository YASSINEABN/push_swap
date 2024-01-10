#include <stdio.h>
#include "push_swap.h"
void ft_list_new(l **list , int a)
{
    l *current;
    current = *list;
    l *node = malloc(sizeof(l));
    node->value = a;
    node->next = NULL;
    while(current->next)
        current = current->next;
    current->next = node;
}

int size(l *list)
{
    int count = 0 ;
    while (list)
    {
       count++;
       list  = list->next;
    }
    return count;
}

// void    sorted_list_three(l **list)
// 				{
// 					if(sorted_list(*list))
// 					{
// 						printf("THE LIST IS SORTED :) \n");
// 						return ;
// 					}
// 					else
// 					{
// 						l *node_min = min_list(*list);
// 						l *node_max = max_list(*list);
					
// 						int index = 0;
// 						int pos_max;
// 						int pos_min;
// 						while(list && !sorted_list(*list))
// 						{  
// 							pos_max = pos_list(node_max->value, *list);
                           
// 							check_max(list, pos_max);
// 							if(sorted_list(*list))
// 								break;
// 							pos_min  = pos_list(node_min->value,*list);
// 							check_min(list,pos_min);
// 						}

// 					}
// 				}
              int check_value(int *p , int start  , int end , int a , int *t , int mid)
              {
                if(*t == 0)
                    if(a <p[mid])
                    *t = 1;
                while(start <= end)
                    {
                        if(p[start] == a )
                         return 1;
                        start++;
                    }
                
                    return 0;
              }   
              int pos(l *stack_a, int value)
              {
                    int pos = 1;
                    while (stack_a)
                    {
                        if(stack_a->value == value)
                            return pos;
                        pos++;
                            stack_a = stack_a->next;
                    }
                    return 0;
                    
              }
              int check_list_value(l *stack_a , int start ,int end , int mid , int *p )
              {
                int k  = 1;
                int a;
                while (stack_a)
                {
                    a =stack_a->value;
                    if(check_value(p, start , end ,stack_a->value,&k,mid))
                        return 1;
                    stack_a =stack_a->next;
                }
                 return 0;
                

              }
int main(int argc, char const *argv[])
{
    int i = 1;
    int cmpt  = 0;
    int a = 0;
    l *stack_a = malloc(sizeof(l));
    l *stack_b = malloc(sizeof(l));
    l *heada = stack_a;
    
    heada->value = atoi(argv[i]);
    i++;
    while(argv[i])
    {
        a = atoi(argv[i]);
        ft_list_new(&heada,a);
        i++;
    }
     
    // rotate_stack(&stack_a);
    // swap_stack(&stack_a);
    // rotate_stack(&stack_a);
    // swap_stack(&stack_a);
    // while(stack_a)
    // {
    //     printf("%d\n",stack_a->value);
    //     stack_a = stack_a->next;
    // }

        //   l *node_min = min_list(stack_a);
        //  l *node_max = max_list(stack_a);
        //  printf("max is %d \n MIN is %d ",node_max->value,node_min->value);
     
    // if(size(stack_a) == 3)
    // {
    //     sorted_list_three(&stack_a);
    // }
    // printf("\n");

//   while(stack_a)
//     {
//         printf("%d\n",stack_a->value);
//         stack_a = stack_a->next;
//     }



int *sorted_list =sorted_array(stack_a);

  i = size(stack_a);
  int mid = i / 2 -1;
  int div = i /2;
  int offset = 2;
  int start = mid -offset;
  int end = mid +offset;
  int k = 0;
  int test = 0;
  int l; 
  int position = 0;
  while (k < i)
  {
    l= stack_a->value;
        if(check_value(sorted_list , start , end , l, &test , mid))
        {
            if(test == 1)
            {
                push_b(&stack_a,&stack_b);
                rotate_stack(&stack_b);
                test = 0;
            }
            else
            {
                push_b(&stack_a,&stack_b);
            }
        }
        else
        {
            rotate_stack(&stack_a);
            // position = pos(stack_a,a);
            // if(position< i /2)
            // {
                
            // }
        }

        k++;
        
        if(k == i-1 || !check_list_value(stack_a , start,end,mid,sorted_list))
        {
            k = 0;
           
            start -= offset;
             if(start < 0)
                start = 0;
                
            end += offset;
        }
            i = size(stack_a);
        if(i == 0)
            break;
  }
   while(stack_b)
    {
        printf("%d\n",stack_b->value);
       stack_b = stack_b->next;
    }

  return 0;
  }

  

