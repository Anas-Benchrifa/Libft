/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 16:11:38 by mac               #+#    #+#             */
/*   Updated: 2024-10-26 16:11:38 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] && (s[index] == c))
			index++;
		if (s[index] && (s[index] != c))
		{
			count++;
			while (s[index] && (s[index] != c))
				index++;
		}
	}
	return (count);
}

static	int	get_next_word(char const *s, char c, size_t *start, size_t *end)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
	return (*start < *end);
}

static	void	free_split(char **result, size_t words_allocated)
{
	size_t	index;

	index = 0;
	while (index < words_allocated)
	{
		free(result[index]);
		index++;
	}
	free(result);
}

static	char	*creat_word(char const *s, size_t start, size_t end)
{
	char	*words;
	size_t	index;

	words = (char *)malloc(((end - start) + 1) * sizeof(char ));
	if (!words)
		return (NULL);
	index = 0;
	while (start < end)
		words[index++] = s[start++];
	words[index] = '\0';
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index_r;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	start = 0;
	index_r = 0;
	while (get_next_word(s, c, &start, &end))
	{
		result[index_r] = creat_word(s, start, end);
		if (!result[index_r++])
		{
			free_split(result, index_r - 1);
			return (NULL);
		}
		start = end;
	}
	result[index_r] = NULL;
	return (result);
}
