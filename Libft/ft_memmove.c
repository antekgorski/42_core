/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:51:59 by agorski           #+#    #+#             */
/*   Updated: 2024/03/13 18:48:23 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char		*dest_temp;
	const char	*src_temp;

	dest_temp = dest;
	src_temp = src;
	if (dest < src)
	{
		while (n--)
			*dest_temp++ = *src_temp++;
	}
	else
	{
		dest_temp = dest_temp + (n - 1);
		src_temp += (n - 1);
		while (n--)
			*dest_temp-- = *src_temp--;
	}
	return (dest);
}