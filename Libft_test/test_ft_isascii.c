/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:42:38 by agorski           #+#    #+#             */
/*   Updated: 2024/03/02 15:56:19 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	char	c;

	for (int i = 0; i <= 255; i++)
	{
		c = (char)i;
		if (ft_isascii(c) != isascii(c))
		{
			printf("error: fot char '%c' (%d), ft_isascii returns%d, a isascii returns %d\n", c, i, ft_isascii(c), isascii(c));
		}
	}
	printf("test done.\n");
	return (0);
}
