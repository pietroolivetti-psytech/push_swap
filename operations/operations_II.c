/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_II.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:27:38 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 16:30:59 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(x_stack **a, x_stack **b)
{
	x_stack	*a_to_b;

	if (!(*a))
		return ;
	a_to_b = NULL;
	a_to_b = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	a_to_b->next = *b;
	if (*b)
		(*b)->prev = a_to_b;
	a_to_b->prev = NULL;
	*b = a_to_b;
	printf("pb\n");
}

void	pa(x_stack **a, x_stack **b)
{
	x_stack	*b_to_a;

	if (!(*b))
		return ;
	b_to_a = NULL;
	b_to_a = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	b_to_a->next = *a;
	if (*a)
		(*a)->prev = b_to_a;
	b_to_a->prev = NULL;
	*a = b_to_a;
	printf("pa\n");
}

void	sa(x_stack **a)
{
	if (!(*a) || !(*a)->next)
		return ;
	swap(&(*a)->nbr, &(*a)->next->nbr);
	swap(&(*a)->index, &(*a)->next->index);
	printf("sa\n");
}

void	sb(x_stack **b)
{
	if (!(*b) || !(*b)->next)
		return ;
	swap(&(*b)->nbr, &(*b)->next->nbr);
	swap(&(*b)->index, &(*b)->next->index);
	printf("sb\n");
}
