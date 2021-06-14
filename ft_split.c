/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyolande <eyolande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:47:06 by eyolande          #+#    #+#             */
/*   Updated: 2020/11/23 13:12:35 by eyolande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	array_size(char const *s, char c)
{
	int		char_count;
	int		words_count;

	char_count = 0;
	words_count = 0;
	while (s[char_count])
	{
		if (s[char_count] != c)
		{
			while (s[char_count] && s[char_count] != c)
				char_count++;
			words_count++;
		}
		else
			char_count++;
	}
	return (words_count);
}

static char	*strdup_word(char const *s, char c, int *char_count)
{
	unsigned int	len;
	char			*word;

	len = 0;
	while (s[(*char_count) + len] && s[(*char_count) + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	len = 0;
	while (s[*char_count] && s[*char_count] != c)
	{
		word[len] = s[*char_count];
		len++;
		(*char_count)++;
	}
	word[len] = '\0';
	return (word);
}

static void	*free_array(void **array)
{
	int i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		char_count;
	int		word_num;
	char	**split;

	char_count = 0;
	word_num = 0;
	if (!s)
		return (NULL);
	split = malloc((array_size(s, c) + 1) * sizeof(char*));
	if (split == NULL)
		return (NULL);
	while (s[char_count])
	{
		if (s[char_count] != c)
		{
			split[word_num] = strdup_word(s, c, &char_count);
			if (split[word_num] == NULL)
				return (char **)free_array((void**)split);
			word_num++;
		}
		else
			char_count++;
	}
	split[word_num] = NULL;
	return (split);
}
