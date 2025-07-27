/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:02:10 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 18:22:16 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// enquanto ainda sao strings: check_digit

int check_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9') && s[i] != ' ' && s[i] != '-')
			return (0);
		if (s[i] == '-' && (!(s[i+1] >= '0' && s[i+1] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

//durante a conversao: check_limit
int check_limit(long n)
{
	if ((n > INT_MAX) || (n < INT_MIN))
		return (0);
	return (1);
}

//ja em linkedlist: check_duplicates
int check_duplicates(x_stack **a, long last_nbr)
{
	//x_stack *last = find_last(*a);
	//int	last_nbr = last->nbr;
	x_stack *cur = *a;

	while (cur->next)
	{
		if (cur->nbr == last_nbr)
			return (0);
		cur = cur->next;
	}
	return (1);
}