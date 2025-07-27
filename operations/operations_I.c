/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_I.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:24:21 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 16:27:24 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(x_stack **a)
{
	x_stack	*tmp;
	x_stack	*last;

	if (!(*a) || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last = find_last(*a);
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
	ft_putchar("ra");
}

void	rb(x_stack **b)
{
	x_stack	*tmp;
	x_stack	*last;

	if (!(*b) || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last = find_last(*b);
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
	ft_putchar("rb");
}

void	rra(x_stack **a)
{
	x_stack	*last_to_first;
	x_stack	*new_last;

	if (!(*a) || !(*a)->next)
		return ;
	last_to_first = find_last(*a);
	new_last = last_to_first->prev;
	new_last->next = NULL;
	(*a)->prev = last_to_first;
	last_to_first->next = *a;
	*a = last_to_first;
	ft_putchar("rra");
}

void	rrb(x_stack **b)
{
	x_stack	*last_to_first;
	x_stack	*new_last;

	if (!(*b) || !(*b)->next)
		return ;
	last_to_first = find_last(*b);
	new_last = last_to_first->prev;
	new_last->next = NULL;
	(*b)->prev = last_to_first;
	last_to_first->next = *b;
	*b = last_to_first;
	ft_putchar("rrb");
}
