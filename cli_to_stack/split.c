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

/*static int	count_words(char *s, char d)
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
	array = NULL;
	len_tokens = count_words(s, d);
	if (!len_tokens)
		exit(1);
	array = malloc(sizeof(char *) * (len_tokens + 1));
	if (!array)
		return (NULL);
	while (i < len_tokens)//(len_tokens-- >= 0)
	{
		array[i++] = get_wd(s, d);
	}
	array[i] = NULL;
	return (array);
}*/

#include "../push_swap.h"

static void	free_split(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	count_words(char *s, char d)
{
	int	i;
	int	ct;
	int	in_word;

	i = 0;
	ct = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != d && !in_word)
		{
			in_word = 1;
			ct++;
		}
		else if (s[i] == d)
			in_word = 0;
		i++;
	}
	return (ct);
}

static char	*get_word(char *s, char d, int *i)
{
	int		start;
	int		end;
	char	*word;

	while (s[*i] && s[*i] == d)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != d)
		(*i)++;
	end = *i;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	*i = start;
	end = 0;
	while (s[*i] && s[*i] != d)
		word[end++] = s[(*i)++];
	word[end] = '\0';
	return (word);
}

char	**split(char *s, char d)
{
	int		i;
	int		k;
	int		words;
	char	**array;

	i = 0;
	k = 0;
	words = count_words(s, d);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (k < words)
	{
		array[k] = get_word(s, d, &i);
		if (!array[k])
		{
			free_split(array);
			return (NULL);
		}
		k++;
	}
	array[k] = NULL;
	return (array);
}
