/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:30:39 by agorski           #+#    #+#             */
/*   Updated: 2024/03/02 15:58:28 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("ft_strlen(\"%s\") = %d\n", str, ft_strlen(str));
	printf("strlen(\"%s\") = %lu\n", str, strlen(str));
	return (0);
}
