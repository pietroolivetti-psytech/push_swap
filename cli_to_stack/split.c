/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:23:42 by pileonar          #+#    #+#             */
/*   Updated: 2025/07/08 17:35:34 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(char *s, char d)
{
	int		ct;
	bool	within;
	int		i;

	i = 0;
	ct = 0;
	while (s[i])
	{
		within = false;
		while (s[i] && s[i] == d)
			i++;
		while (s[i] && s[i] != d)
		{
			if (!within)
			{
				ct += 1;
				within = true;
			}
			i++;
		}
	}
	return (ct);
}

static char	*get_wd(char *s, char d)
{
	static int	cursor; //= 0 not necessary
	int			len;
	int			i;
	char		*word;

	i = 0;
	len = 0;
	while (s[cursor] == d)
		cursor++;
	while (s[cursor + len] != d && s[cursor + len])
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[cursor] != d && s[cursor])
		word[i++] = s[cursor++];
	word[i] = '\0';
	return (word);
}

char	**split(char *s, char d)
{
	int		len_tokens;
	char	**array;
	int		i;

	i = 0;
	len_tokens = count_words(s, d);
	if (!len_tokens)
		exit(1);
	array = malloc(sizeof(char *) * (len_tokens + 2));
	while (len_tokens-- >= 0)
	{
		if (i == 0)
		{
			array[i] = malloc(sizeof(char));
			if (!array[i])
				return (NULL);
			array[i++][0] = '\0';
			continue ;
		}
		array[i++] = get_wd(s, d);
	}
	array[i] = NULL;
	return (array);
}
