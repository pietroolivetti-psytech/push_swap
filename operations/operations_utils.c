/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:55:03 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 16:57:29 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

x_stack	*find_last(x_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	stack_len(x_stack *stack)
{
	int	ct;

	if (!stack)
		return (0);
	ct = 0;
	while (stack)
	{
		stack = stack->next;
		ct++;
	}
	return (ct);
}

void	add_index(x_stack *stack)
{
	int	i;

	if (!stack)
		return ;
	i = 0;
	while (stack)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
void ft_putchar(char *s)
{
	int	i;

	i = -1;
	while(s[++i])
		write(1, &s[i], 1);
	write(1, "\n", 1);
}