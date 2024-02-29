/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:30:39 by agorski           #+#    #+#             */
/*   Updated: 2024/02/28 18:20:44 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
    int	i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    char *str = "Hello, World!";
    printf("ft_strlen(\"%s\") = %d\n", str, ft_strlen(str));
    printf("strlen(\"%s\") = %lu\n", str, strlen(str));
    return (0);
}
