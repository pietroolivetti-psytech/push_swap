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

static void ft_putchar(char *s)
{
	int	i;

	i = -1;
	while(s[++i])
		write(1, &s[i], 1);
	write(1, "\n", 1);
}

int check_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9') && s[i] != ' ')
		{
			ft_putchar("Error");
			return (0);
		}
		i++;
	}
	return (1);
}

//durante a conversao: check_limit

//ja em linkedlist: check_duplicates