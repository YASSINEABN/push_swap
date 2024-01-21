#include <stdio.h>
#include "push_swap.h"




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
    if(size(stack_a)==5)
        five_sort(&stack_a,&stack_b);


    // int *sorted_list = sorted_array(stack_a);
    // make_stack_b(&stack_a,&
    // stack_b,sorted_list);
    // make_stack_a(&stack_a,&stack_b,sorted_list);
    // printf("last node %d ", last_node(stack_a));
       




              //  printf("----------------------------------\n");
//               printf("-----------------------------stackb------------------------ \n");
    
//    while(stack_b)
//     {
//         printf("%d\n",stack_b->value);
//        stack_b = stack_b->next;
//     }
printf("-----------------------------stacka------------------------ \n");
        while(stack_a)
            {
                printf("%d\n",stack_a->value);
                stack_a = stack_a->next;
            }
     
        
  return 0;
  }


  
