/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:10:02 by agorski           #+#    #+#             */
/*   Updated: 2024/03/06 15:31:28 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (*(src + i) && --size)
	{
		*dest++ = *(src + i++);
	}
	*dest = '\0';
	while (*(src + i))
	{
		++i;
	}
	return (i);
}
