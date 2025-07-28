
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

void sort_four(x_stack **a, x_stack **b)
{
	int	i;

	i = 0;
	while (stack_len(*a) > 2)
	{
		if ((*a)->index == i)
			{pb(a, b); i++;}
		ra(a);
	}
	if (!is_sorted(*a, 2))
		sa(a);
	pa(a, b);
	pa(a, b);
}
void sort_five(x_stack **a, x_stack **b)
{
	int	i;

	i = 0;
	while (stack_len(*a) > 2)
	{
		if ((*a)->index == i)
			{pb(a, b); i++;}
		rra(a);
	}
	if (!is_sorted(*a, 2))
		sa(a);
	pa(a, b);
	pa(a, b);
	pa(a, b);
}