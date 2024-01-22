#include "../push_swap.h"
void    sorted_list_three(l **list)
				{
	
						l *node_min = min_list(*list);
						l *node_max = max_list(*list);
					
						int pos_max;
						int pos_min;
						while(list && !sorted_list(*list))
						{  
							pos_max = pos_list(node_max->value, *list);
                           
							check_max(list, pos_max);
							if(sorted_list(*list))
								break;
							pos_min  = pos_list(node_min->value,*list);
							check_min(list,pos_min);
						}

				}