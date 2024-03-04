/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:27:42 by agorski           #+#    #+#             */
/*   Updated: 2024/03/02 15:57:34 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	char	c;

	for (int i = 0; i <= 255; i++)
	{
		c = (char)i;
		if (ft_isprint(c) != isprint(c))
		{
			printf("error: fot char '%c' (%d), ft_isprint returns%d,a isprint returns %d\n", c, i, ft_isprint(c), isprint(c));
		}
	}
	printf("test done.\n");
	return (0);
}
