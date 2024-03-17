#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test when c is not found in the string
	char buffer4[10] = "abcdefghi";
	char buffer4_std[10] = "abcdefghi";
	printf("ft_strchr(buffer4, 'z'): %s\n", (char *)ft_strchr(buffer4, 'z'));
	printf("strchr(buffer4_std, 'z'): %s\n", (char *)strchr(buffer4_std, 'z'));

	// Test when c is found at the beginning of the string
	char buffer5[10] = "abcdefghi";
	char buffer5_std[10] = "abcdefghi";
	printf("ft_strchr(buffer5, 'a'): %s\n", (char *)ft_strchr(buffer5, 'a'));
	printf("strchr(buffer5_std, 'a'): %s\n", (char *)strchr(buffer5_std, 'a'));

	// Test when c is found at the end of the string
	char buffer6[10] = "abcdefghi";
	char buffer6_std[10] = "abcdefghi";
	printf("ft_strchr(buffer6, 'i'): %s\n", (char *)ft_strchr(buffer6, 'i'));
	printf("strchr(buffer6_std, 'i'): %s\n", (char *)strchr(buffer6_std, 'i'));

	// Test when c is found in the middle of the string
	char buffer7[10] = "abcdefghi";
	char buffer7_std[10] = "abcdefghi";
	printf("ft_strchr(buffer7, 'd'): %s\n", (char *)ft_strchr(buffer7, 'd'));
	printf("strchr(buffer7_std, 'd'): %s\n", (char *)strchr(buffer7_std, 'd'));

// Test when c is null
	char buffer8[10] = "abcdefghi";
	char buffer8_std[10] = "abcdefghi";
	printf("ft_strchr(buffer8, '\\0'): %s\n", (char *)ft_strchr(buffer8, '\0'));
	printf("strchr(buffer8_std, '\\0'): %s\n", (char *)strchr(buffer8_std, '\0'));

	// Test when c is dubble
	char buffer9[10] = "abcdefgahi";
	char buffer9_std[10] = "abcdefgahi";
	printf("ft_strchr(buffer9, 'a'): %s\n", (char *)ft_strchr(buffer9, 'a'));
	printf("strchr(buffer9_std, 'a'): %s\n", (char *)strchr(buffer9_std, 'a'));
	return (0);
}