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

/*static void	free_exit(char **arr, x_stack *stack_a, x_stack *stack_b)
{
	x_stack *tmp;
	int		i;

	i = 0;
	//if (!arr)
	//	return;
	while (arr[i])
		free(arr[i++]);
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
	exit(0);
}*/
/*static void free_split(char **array) {
    int i = 0;
    if (!array) return;
    while (array[i])
        free(array[i++]);
    free(array);
}*/

void	free_exit(char **arr, x_stack *a, x_stack *b, int err)
{
	x_stack	*tmp;
	int		i;

	if (arr)
	{
		i = 0;
		while (arr[i])
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	while (a)
	{
		tmp = a;
		a = a->next;
		free(tmp);
	}
	while (b)
	{
		tmp = b;
		b = b->next;
		free(tmp);
	}
	if (err)
		ft_putchar("Error");
	exit(err);
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
			free_exit(parsed_array, a, b, 1); //exit(1);
		if(!init_a(&a, parsed_array))
			free_exit(parsed_array, a, b, 1);
		total_n = stack_len(a);
		sort_index(a);
		while (1)
		{
			if (is_sorted(a, total_n))
				free_exit(parsed_array, a, b, 0);//exit(1);
			radix_sort(&a, &b);
		}
	}

	return (0);
}