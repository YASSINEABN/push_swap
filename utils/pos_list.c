	#include "../push_swap.h"

                	int pos_list(int max , l *list)
				{
				int pos = 0;
				while (list)
				{
					if(list ->value == max)
						return pos;
						pos++;
						list = list->next;
				}

				}