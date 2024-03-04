/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:17:29 by agorski           #+#    #+#             */
/*   Updated: 2024/03/01 18:48:04 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	for (int i = 0; i <= 255; i++)
	{
		unsigned char c = (unsigned char)i;
		if (ft_isalpha(c) != isalpha(c))
		{
			printf("Error: for sign '%c' (%d),ft_isalpha return (%d),a isalpha return (%d)\n", c, i,ft_isalpha(c), isalpha(c));
		}
	}

	printf("Test done.\n");

	return (0);
}
