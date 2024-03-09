/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:41:14 by agorski           #+#    #+#             */
/*   Updated: 2024/03/06 15:12:28 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	void	*temp_s;

	temp_s = s;
	while (n--)
	{
		*((unsigned char *)temp_s++) = (unsigned char)c;
	}
	return (s);
}
