/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:41:26 by agorski           #+#    #+#             */
/*   Updated: 2024/03/20 18:04:20 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimedstr;

	unsigned int i;
    unsigned int j;
    
    j = 0;
	i = 0;
	while (*(s1 + i))
	{
        if(*(s1 + j) == (set + i))
        {
            /* code */
        }   
		i++;
	}
}