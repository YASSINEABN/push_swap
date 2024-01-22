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
    l *stack_a = malloc(sizeof(l));
     l *stack_b = malloc(sizeof(l));
     char **arg;
     arg = (char **)argv;
     stack_a = NULL;
    stack_b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
    else if (argc == 2) 
		 arg = ft_split(argv[1], ' '); 

        init_stack_a(&stack_a, arg + 1);

        if (!sorted_list(stack_a)) 
	{
		// if (stack_len(a) == 2) //If not, and there are two numbers, swap the first two nodes
		// 	sa(&a, false);
		// else if (stack_len(a) == 3) //If not, and there are three numbers, call the sort three algorithm
		// 	sort_three(&a);
		// else
			// sort_stacks(&a, &b); //If not, and there are more than three numbers, call the sort stacks algorithm
	}
    // if(size(stack_a)==5)
    //     five_sort(&stack_a,&stack_b);


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
// printf("-----------------------------stacka------------------------ \n");
//         while(stack_a)
//             {
//                 printf("%d\n",stack_a->value);
//                 stack_a = stack_a->next;
//             }
     
        
  return 0;
  }


  
