#include "../push_swap.h"

void	check_coords(coords **coords,int i)
{

	(*coords)->start -= (*coords)->offset;
	if ((*coords)->start < 0)
		(*coords)->start = 0;

	(*coords)->end += (*coords)->offset;
	if ((*coords)->end == i)
		(*coords)->end = i - 1;
}