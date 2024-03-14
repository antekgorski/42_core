#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10] = "12345";
	char str4[10] = "67890";

	// Test case 1: Test with empty string
	ft_bzero(str1, 0);
	if (strcmp(str1, "Hello") != 0)
	{
		printf("Test case 1 failed: Expected 'Hello', got '%s'\n", str1);
	}

	// Test case 2: Test with non-empty string
	ft_bzero(str2, 5);
	if (strcmp(str2, "") != 0)
	{
		printf("Test case 2 failed: Expected '', got '%s'\n", str2);
	}

	// Test case 3: Test with string containing digits
	ft_bzero(str3, 3);
	if (strcmp(str3, "") != 0)
	{
		printf("Test case 3 failed: Expected '', got '%s'\n", str3);
	}

	// Test case 4: Test with string containing digits
	ft_bzero(str4, 10);
	if (strcmp(str4, "") != 0)
	{
		printf("Test case 4 failed: Expected '', got '%s'\n", str4);
	}

	printf("All test cases passed.\n");

	return (0);
}
