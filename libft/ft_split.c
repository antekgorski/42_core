/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:07:58 by agorski           #+#    #+#             */
/*   Updated: 2024/03/26 21:37:40 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int	word_number;

	word_number = ft_number_of_words(s, c);
	return (NULL);
}

int	main(void)
{
	printf("%d\n", ft_number_of_words("a  a", ' '));
	printf("%d\n", ft_number_of_words("  jeden   dwa trzy cztery    piec    ",
			' '));

	return (0);
}