/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:10:23 by agorski           #+#    #+#             */
/*   Updated: 2024/03/06 17:29:56 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	char	*dst_temp;
	char	*src_temp;

	dst_temp = dst;
	src_temp = src;
	while (dst_temp++)
		;
	while (src_temp)
	{
        *dst_temp++ = *src_temp++
    }
    *dst_temp = '\0';
    return ()
}
