#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test 1
	char s1[] = "Hello";
	char s2[] = "Hello";
	int n1 = 5;
	int r1 = ft_memcmp(s1, s2, n1);
	int e1 = memcmp(s1, s2, n1);
	printf("Test 1\n");
	printf("Expected: %d\n", e1);
	printf("Returned: %d\n", r1);
	printf("\n");

	// Test 2
	char s3[] = "Hello";
	char s4[] = "Hellp";
	int n2 = 5;
	int r2 = ft_memcmp(s3, s4, n2);
	int e2 = memcmp(s3, s4, n2);
	printf("Test 2\n");
	printf("Expected: %d\n", e2);
	printf("Returned: %d\n", r2);
	printf("\n");

	// Test 3
	char s5[] = "Hello";
	char s6[] = "Hello";
	int n3 = 3;
	int r3 = ft_memcmp(s5, s6, n3);
	int e3 = memcmp(s5, s6, n3);
	printf("Test 3\n");
	printf("Expected: %d\n", e3);
	printf("Returned: %d\n", r3);
	printf("\n");

	return (0);
}