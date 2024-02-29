/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:07:55 by agorski           #+#    #+#             */
/*   Updated: 2024/02/28 14:44:53 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i <= 255; i++)
// 	{
// 		char c = (char)i;
// 		if (ft_isascii(c) != isascii(c))
// 		{
// 			printf("error: fot char '%c' (%d), ft_isascii returns%d,
//a isascii returns %d\n", c, i, ft_isascii(c), isascii(c));
// 		}
// 	}

// 	printf("test done.\n");

// 	return (0);
// }
