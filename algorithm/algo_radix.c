/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:17:06 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 16:17:54 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(x_stack **a, x_stack **b)
{
	int	max_bits;
	int	max_index;
	int	i;
	int	j;

	i = 0;
	max_bits = 0;
	max_index = stack_len(*a) - 1;
	while (max_index >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < (max_index + 1))
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

int	is_sorted(x_stack *a, int tot)
{
	int		ct;
	x_stack	*tmp;

	ct = stack_len(a);
	if (ct < tot)
		return (0);
	tmp = a;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
