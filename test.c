/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:14:41 by agorski           #+#    #+#             */
/*   Updated: 2024/03/06 11:14:44 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*orgin_d;

	orgin_d = dest;
	while (n--)
	{
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	}
	return (orgin_d);
}