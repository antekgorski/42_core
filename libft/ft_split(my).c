/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:07:58 by agorski           #+#    #+#             */
/*   Updated: 2024/03/28 00:10:18 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_words_alloc(char const *s, char c, char **split)
{
	int		i;
	int		start_word;
	int		index;
	int		word_index;
	char	*word;

	i = 0;
	start_word = -1;
	index = 0;
	word_index = 0;
	while (s[index] != '\0')
	{
		if (start_word == -1 && s[index] != c)
			start_word = index;
		if (start_word != -1 && (s[index] == c || s[index + 1] == '\0'))
		{
			word = malloc(sizeof(char) * (index - start_word + 1));
			if (word == NULL)
				return (NULL);
			while (start_word < index)
			{
				word[i++] = s[start_word++];
			}
			word[i] = '\0';
			i = 0;
			split[word_index++] = word;
			start_word = -1;
		}
		index++;
	}
	split[word_index] = NULL;
	return (split);
}

static int	ft_number_of_words(char const *s, char c)
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

	if (s == NULL)
		return (NULL);
	split = (malloc)((ft_number_of_words(s, c) + 1) * (sizeof(char *)));
	if (split == NULL)
		return (NULL);
	return (ft_words_alloc(s, c, split));
}
