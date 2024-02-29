/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:41:14 by agorski           #+#    #+#             */
/*   Updated: 2024/02/29 14:44:06 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	while (s <= n)
	{
		s = c;
		s++;
	}
	return (s);
}

void	main(int)
{
	char	*s;

	ft_memset(*s, 'a', 10);
	printf("ft_memset %s", ft_memset);
}
