/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:50:12 by agorski           #+#    #+#             */
/*   Updated: 2024/03/13 17:46:56 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char		*dest_temp;
	const char	*src_temp;

	dest_temp = dest;
	src_temp = src;
	while (n--)
	{
		*dest_temp++ = *src_temp++;
	}
	return (dest);
}
