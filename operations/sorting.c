/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:58:06 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 16:59:54 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	sort_init_index(x_stack *stack)
{
	x_stack	*tmp;
	int		ct;

	tmp = stack;
	ct = 0;
	while (tmp)
	{
		ct++;
		tmp->index = -1;
		tmp = tmp->next;
	}
	return (ct);
}

void	sort_index(x_stack *stack)
{
	x_stack	*tmp;
	x_stack	*min_node;
	int		i;
	int		ct;

	if (!stack)
		return ;
	i = 0;
	tmp = stack;
	ct = sort_init_index(stack);
	while (i <= ct)
	{
		tmp = stack;
		min_node = NULL;
		while (tmp)
		{
			if (tmp->index == -1 && (!min_node || tmp->nbr < min_node->nbr))
				min_node = tmp;
			tmp = tmp->next;
		}
		if (min_node)
			min_node->index = i;
		i++;
	}
}
