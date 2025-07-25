/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:05:27 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 17:54:36 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_exit(char **arr, x_stack *stack_a, x_stack *stack_b)
{
	x_stack *tmp;
	int		i;

	i = 0;
	if (!arr)
		return;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	while (stack_b)
	{
		tmp = stack_b;
		stack_b = stack_b->next;
		free(tmp);
	}
	exit(1);
}


int main(int ac, char **av)
{
	if (ac > 1)
	{
		x_stack	*a;
		x_stack	*b;
		char	**parsed_array;
		int		total_n;

		a = NULL;
		b = NULL;
		//ar = split(av[1], ' ');
		parsed_array = create_array(ac, av);
		if (!parsed_array)
			exit(1);//free_exit(parsed_array, NULL, NULL);
		total_n = stack_len(a);
		init_a(&a, parsed_array + 1);
		sort_index(a);
		while (1)
		{
			if (is_sorted(a, total_n))
				free_exit(parsed_array, a, b);//exit(1);
			radix_sort(&a, &b);
		}
	}

	return (0);
}