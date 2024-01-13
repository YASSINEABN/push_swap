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
int check_lastnode(l *stack_a , int a)
{
    while (stack_a->next)
    {
       stack_a = stack_a->next;
    }
    if(stack_a->value >a)
        return 0;
        else
            return 1;
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
              void find_best_move(l **stack_a, l **stack_b , int pos, int size)
              {

                   
                    if(pos>size/2)
                    {
                        pos = size - pos;
                         pos++;
                        while (pos--)
                        {
                            rotate_stack_large(stack_b);
                            // actions("rrb",stack_a,stack_b);
                        }

                     }   
                    else
                    {
                        while (pos-- > 1)
                        {
                
                            rotate_stack(stack_b);
                            // actions("rb",stack_a,stack_b);
                        }
                    }
                    push_a(stack_a,stack_b);
                    // actions("pa",stack_a,stack_b);
              }

                     void  check_coords(int *start , int offset , int *end , int *k , l **stack_a ,int i)
              {
                 *k = 0;
                    
                        *start -= offset;
                        if(start < 0)
                            *start = 0;
                            
                        *end += offset;
                        if(*end==i)
                            *end = i-1;
              }
                void init_coords(int *i, int *offset, int *mid, int *start, int *end, int *k, int *test, l *stack_a)
                {
                    *i = size(stack_a);
                    *mid = *i / 2 - 1;

                    if (*i > 100)
                        *offset = *i / 18;
                    else
                        *offset = *i / 8;

                    *start = *mid - *offset;
                    *end = *mid + *offset;
                    *k = 0;
                    *test = 0;
                }

             void make_stack_b(l **stack_a,l **stack_b ,int *sorted_list)
              {
                    int i ;
                    int l;
                    int offset;
                    int mid ;
                    int start;
                    int end;
                    int k;
                    int test; 
                    init_coords(&i , &offset , &mid , &start ,&end,&k,&test,*stack_a);

                    while (1)
                    {
                        test = 0;
                        if(check_value(sorted_list , start , end ,(*stack_a)->value , &test , mid))
                        {   
                            if(test == 1)
                            {
                                 push_b(stack_a,stack_b);
                                rotate_stack(stack_b);
                                // actions("pb",stack_a,stack_b);
                                // actions("rb",stack_a,stack_b);
                                test = 0;
                            }
                            else
                                push_b(stack_a,stack_b);
                                // actions("pb",stack_a,stack_b);
                        }
                        else
                        rotate_stack(stack_a);
                            // actions("ra",stack_a,stack_b);

                        k++;
                        
                        if(k == i-1 || !check_list_value(*stack_a , start,end,mid,sorted_list))
                            check_coords(&start , offset , &end , &k ,stack_a , i);
                        if(*stack_a == NULL)
                            break;

                 }
              }

              void make_stack_a(l **stack_a,l **stack_b, int *sorted_list)
              {
                      int check = 0;
        int size_stack_b = size(*stack_b);    
        int pos_of_max; 
        int  max; 
        int val ;
       int st = size(*stack_b);
       int m =0;
       int tmp;
   
        --st;
    
     
        while (1)
        {
                if(check == 0)
                {
                       size_stack_b = size(*stack_b);  
                         pos_of_max = pos(*stack_b,sorted_list[st]);
                   find_best_move(stack_a,stack_b,pos_of_max,size_stack_b);
                   --st;
                    check = 1;  
                }
              
            else
            {
                size_stack_b = size(*stack_b);
                val = (*stack_b)->value;
                max = sorted_list[st];
              
                
                if(tmp == max && m==1)
                {
                    m = 0;
                    rotate_stack_large(stack_a);
                    --st;
                     max = sorted_list[st];
                }
                
                   
                if(m == 0)
                {
                    if(val != max)
                    {
                        push_a(stack_a, stack_b);
                        rotate_stack(stack_a);
                        m = 1;
                        tmp = val;
                    }
                    
                    else
                    {
                        push_a(stack_a, stack_b);
                        st--;
                    }
                    
                }
                else
                    {
                   
                        size_stack_b = size(*stack_b);
                         max = sorted_list[st];
                        pos_of_max = pos(*stack_b,max);
                        find_best_move(stack_a,stack_b,pos_of_max,size_stack_b);
                         st--;
                    }
            
            if(*stack_b == NULL)
                break;                               
        }
        }



    //   printf("---------------------------------- \n");
      if(check_lastnode(*stack_a,(*stack_a)->value))
      {
            rotate_stack_large(stack_a);
      }
              } 
int main(int argc, char const *argv[])
{
    int i = 1;
    int cmpt  = 0;
    int a = 0;
    l *stack_a = malloc(sizeof(l));
    l *stack_b = malloc(sizeof(l));
    stack_b = NULL;
    l *heada = stack_a;
    
    heada->value = atoi(argv[i]);
    i++;
    while(argv[i])
    {
        a = atoi(argv[i]);
        ft_list_new(&heada,a);
        i++;
    }


    int *sorted_list = sorted_array(stack_a);
    make_stack_b(&stack_a,&stack_b,sorted_list);
    make_stack_a(&stack_a,&stack_b,sorted_list);


              //  printf("----------------------------------\n");
    
   while(stack_b)
    {
        printf("%d\n",stack_b->value);
       stack_b = stack_b->next;
    }

        while(stack_a)
            {
                printf("%d\n",stack_a->value);
                stack_a = stack_a->next;
            }
     
        
  return 0;
  }


  

