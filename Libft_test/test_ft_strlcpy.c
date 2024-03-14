#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(void)
{
	char	src[20] = "Hello, World!";
	char	dst[10];
	size_t	size;

	// Test case 1: Copying entire source string
	size = sizeof(dst);
	ft_strlcpy(dst, src, size);
	printf("Test case 1:\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	printf("Expected output: Hello, Wo\n");
	printf("Actual output: %s\n", dst);
	printf("\n");

	// Test case 2: Copying partial source string
	size = 7;
	ft_strlcpy(dst, src, size);
	printf("Test case 2:\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	printf("Expected output: Hello, \n");
	printf("Actual output: %s\n", dst);
	printf("\n");

	// Test case 3: Copying empty source string
	size = sizeof(dst);
	src[0] = '\0';
	ft_strlcpy(dst, src, size);
	printf("Test case 3:\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	printf("Expected output: \n");
	printf("Actual output: %s\n", dst);
	printf("\n");

	return (0);
}