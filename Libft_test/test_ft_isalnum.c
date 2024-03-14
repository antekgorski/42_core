/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:29:19 by agorski           #+#    #+#             */
/*   Updated: 2024/03/02 15:54:10 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	for (int i = 0; i <= 300; i++)
	{
		char c = (char)i;
		if (ft_isalnum(c) != isalnum(c))
		{
			printf("error: fot char '%c' (%d), ft_isalnum returns%d,a isalnum returns %d\n", c, i, ft_isalnum(c), isalnum(c));
		}
	}

	printf("test done.\n");

	return (0);
}