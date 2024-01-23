#include <stdio.h>
#include "push_swap.h"

void free_stacks(l **stack)
{
l	*tmp; 
	l	*current;

	if (!stack) //Check for an empty stack
		return ;
	current = *stack;
	while (current) //As long as a node exist in the stack
	{
		tmp = current->next; //Assign to `tmp` the pointer to the next node
		current->value = 0; //Assigning the node to `0` before freeing is not strictly necessary but it can help catch potential bugs such as memory-leaks and improve debugging
		free(current); //Free the current node, deallocating the memory occupied by that node
		current = tmp; //Assign `tmp` as the current first node
	}
	*stack = NULL;
}

int main(int argc, char const *argv[])
{
    l *stack_a;
     l *stack_b;
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
	int *sl = sorted_array(stack_a);
        if (!sorted_list(stack_a)) 
	{
		if (size(stack_a) == 2) 
			sa(&stack_a);
        else if(size(stack_a) == 3)
            sorted_list_three(&stack_a);
        else if (size(stack_a) == 5)
            five_sort(&stack_a,&stack_b);
		 else
			large_sort(&stack_a, &stack_b ,sl); 
	}
	
	
   
//    while(stack_b)
//     {
//         printf("%d\n",stack_b->value);
//        stack_b = stack_b->next;
//     }
	// printf("-----------------------------stacka------------------------ \n");
	// 		while(stack_a)
	// 			{
	// 				printf("%d\n",stack_a->value);
	// 				stack_a = stack_a->next;
	// 			}
    free_stacks(&stack_a);
	free(sl);
        
  return 0;
  }


  
