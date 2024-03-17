#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test when c is not found in the string
	char buffer4[10] = "abcdefghi";
	char buffer4_std[10] = "abcdefghi";
	printf("ft_strrchr(buffer4, 'z'): %s\n", (char *)ft_strrchr(buffer4, 'z'));
	printf("strrchr(buffer4_std, 'z'): %s\n", (char *)strrchr(buffer4_std, 'z'));

	// Test when c is found at the beginning of the string
	char buffer5[10] = "abcdefghi";
	char buffer5_std[10] = "abcdefghi";
	printf("ft_strrchr(buffer5, 'a'): %s\n", (char *)ft_strrchr(buffer5, 'a'));
	printf("strrchr(buffer5_std, 'a'): %s\n", (char *)strrchr(buffer5_std, 'a'));

	// Test when c is found at the end of the string
	char buffer6[10] = "abcdefghi";
	char buffer6_std[10] = "abcdefghi";
	printf("ft_strrchr(buffer6, 'i'): %s\n", (char *)ft_strrchr(buffer6, 'i'));
	printf("strrchr(buffer6_std, 'i'): %s\n", (char *)strrchr(buffer6_std, 'i'));

	// Test when c is found in the middle of the string
	char buffer7[10] = "abcdefghi";
	char buffer7_std[10] = "abcdefghi";
	printf("ft_strrchr(buffer7, 'd'): %s\n", (char *)ft_strrchr(buffer7, 'd'));
	printf("strrchr(buffer7_std, 'd'): %s\n", (char *)strrchr(buffer7_std, 'd'));

// Test when c is null
	char buffer8[10] = "abcdefghi";
	char buffer8_std[10] = "abcdefghi";
	printf("ft_strrchr(buffer8, '\\0'): %s\n", (char *)ft_strrchr(buffer8, '\0'));
	printf("strrchr(buffer8_std, '\\0'): %s\n", (char *)strrchr(buffer8_std, '\0'));

		// Test when c is dubble
	char buffer9[10] = "abcdefgahi";
	char buffer9_std[10] = "abcdefgahi";
	printf("ft_strrchr(buffer9, 'a'): %s\n", (char *)ft_strrchr(buffer9, 'a'));
	printf("strrchr(buffer9_std, 'a'): %s\n", (char *)strrchr(buffer9_std, 'a'));
	return (0);
}