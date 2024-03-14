/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:07:50 by agorski           #+#    #+#             */
/*   Updated: 2024/03/02 15:57:05 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	for (int i = 0; i <= 255; i++)
	{
		char c = (char)i;
		if (ft_isdigit(c) != isdigit(c))
		{
			printf("error: fot char '%c' (%d), ft_isdigit returns%d,a isdigit returns %d\n", c, i, ft_isdigit(c), isdigit(c));
		}
	}

	printf("test done.\n");

	return (0);
}