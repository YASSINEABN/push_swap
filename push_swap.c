#include <stdio.h>
#include "push_swap.h"

int main(int argc, char const *argv[])
{
    l *stack_a = malloc(sizeof(l));
     l *stack_b = malloc(sizeof(l));
     char **arg;
     arg = (char **)argv;
     stack_a = NULL;
    stack_b = NULL;
    arg++;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
    
    else if (argc == 2) 
		 arg = ft_split(argv[1], ' '); 

        init_stack_a(&stack_a, arg);

        if (!sorted_list(stack_a)) 
	{
		if (size(stack_a) == 2) 
			swap_stack(&stack_a);
        else if(size(stack_a) == 3)
            sorted_list_three(&stack_a);
        else if (size(stack_a) == 5)
            five_sort(&stack_a,&stack_b);
		 else
			large_sort(&stack_a, &stack_b ,sorted_array(stack_a)); 
	}
   
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
    //  free_stacks(&stack_a,&stack_b);
        
  return 0;
  }


  
