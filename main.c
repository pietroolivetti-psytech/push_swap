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
		total_n = stack_len(a);
		init_a(&a, parsed_array + 1);
		sort_index(a);
		while (1)
		{
			if (is_sorted(a, total_n))
				exit(1);
			radix_sort(&a, &b);
		}
	}
	return (0);
}