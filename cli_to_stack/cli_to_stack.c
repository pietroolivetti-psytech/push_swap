/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cli_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:19:44 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 18:01:02 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atol(char *s)
{
	int	i;
	int	sg;
	int	r;

	i = 0;
	r = 0;
	sg = 1;
	while (s[i] == ' ' || (s[i] >= 7 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sg = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
		r = (r * 10) + (s[i++] - '0');
	return (r * sg);
}

static void	append_node(x_stack **stack, int n)
{
	x_stack	*node;
	x_stack	*last;

	node = malloc(sizeof(x_stack));
	if (!node)
		return ;
	node->nbr = n;
	node->next = NULL;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last = find_last(*stack);
		last->next = node;
		node->prev = last;
	}
}

void	init_a(x_stack **a, char **av)
{
	int		i;
	long	n;

	i = 0;
	while (av[i])
	{
		n = ft_atol(av[i]);
		append_node(a, (int)n);
		i++;
	}
}

char	**create_array(int ac, char **array_nb)
{
	char	**ar;

	ar = NULL;
	if (ac == 2)
		ar = split(array_nb[1], ' ');
	return (ar);
	//if (ac > 2) usar o strjoin ate o fim de modo que a string possa ser passada a split
	//implementar verificador de erros

}