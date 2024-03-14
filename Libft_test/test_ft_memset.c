/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:41:14 by agorski           #+#    #+#             */
/*   Updated: 2024/03/01 18:28:20 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int main()
 
{
    // // Test when s is NULL
    // printf("ft_memset(NULL, 'a', 5): %p\n", ft_memset(NULL, 'a', 5));
    // printf("memset(NULL, 'a', 5): %p\n", memset(NULL, 'a', 5));

    // Test when n is 0
    char buffer1[10] = "abcdefghi";
    char buffer1_std[10] = "abcdefghi";
    printf("ft_memset(buffer1, 'a', 0): %s\n", (char*)ft_memset(buffer1, 'a',0));
    printf("memset(buffer1_std, 'a', 0): %s\n", (char*)memset(buffer1_std,'a', 0));

    // Test normal case
    char buffer2[10] = "abcdefghi";
    char buffer2_std[10] = "abcdefghi";
    printf("ft_memset(buffer2, 'a', 5): %s\n", (char*)ft_memset(buffer2, 'a',5));
    printf("memset(buffer2_std, 'a', 5): %s\n", (char*)memset(buffer2_std,'a', 5));

    return (0);
}

// s[] == s[0];
// *s;
// s;
// s[0] = 'c';
// *(s + 0) = 'c';
	//	size_t			i;
	//	unsigned char	*w;
	//	i = 0;
	//	w = s;
