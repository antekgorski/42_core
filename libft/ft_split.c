/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:07:58 by agorski           #+#    #+#             */
/*   Updated: 2024/04/01 00:18:32 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill_word(const char *s, int start_word, int index)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (index - start_word + 1));
	if (word == NULL)
		return (NULL);
	while (start_word < index)
	{
		word[i] = s[start_word];
		i++;
		start_word++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_words_alloc(char const *s, char c, char **split,
		int start_word)
{
	int	index;
	int	word_index;
	int	i;

	index = 0;
	word_index = 0;
	while (s[index] != '\0')
	{
		if (start_word == -1 && s[index] != c)
			start_word = index;
		else if (ft_strchr(&s[index], c) == NULL && start_word != -1)
		{
			i = 0;
			while (s[index] != '\0')
			{
				split[word_index] = malloc(ft_strlen(&s[index]) * sizeof(char)
						+ 1);
				if (!split[word_index])
					return (NULL);
				split[word_index][i++] = s[index++];
			}
			split[word_index][i] = '\0';
		}
		else if (start_word != -1 && (s[index] == c || s[index + 1] == '\0'))
		{
			split[word_index++] = ft_fill_word(s, start_word, index);
			start_word = -1;
		}
		index++;
	}
	split[word_index] = NULL;
	return (split);
}

static int	ft_nbr_words(char const *s, char c)
{
	size_t	i;
	int		num;

	num = 0;
	i = 0;
	if (*s != c && *s != '\0')
		num++;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0')
			num++;
		i++;
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start_word;

	start_word = -1;
	if (s == NULL)
		return (NULL);
	split = (malloc)((ft_nbr_words(s, c) + 1) * (sizeof(char *)));
	if (split == NULL)
		return (NULL);
	return (ft_words_alloc(s, c, split, start_word));
}
