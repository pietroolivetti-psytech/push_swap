
#include "../push_swap.h"

void sort_two(x_stack **a)
{
	sa(a);
}

void sort_three(x_stack **a)
{
	x_stack *last= find_last(*a);
	while (!is_sorted(*a, 3))
	{
		if (last->index == 2)
			sa(a);
		else
			ra(a);
		last = find_last(*a);
	}
}
