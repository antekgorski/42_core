/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:30:39 by agorski           #+#    #+#             */
/*   Updated: 2024/03/14 17:23:58 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("ft_strlen(\"%s\") = %d\n", str, ft_strlen(str));
	printf("strlen(\"%s\") = %lu\n", str, strlen(str));
	return (0);
}
