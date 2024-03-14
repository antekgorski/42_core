#include <stdio.h>
#include <string.h>

// Function prototype
size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
    char dst[20] = "Hello";
    const char *src = " World!";
    unsigned int size = 20;

    // Test case 1: Concatenating src to dst
    unsigned int result = ft_strlcat(dst, src, size);
    printf("Test case 1:\n");
    printf("Expected output: Hello World!\n");
    printf("Actual output: %s\n", dst);
    printf("Return value: %u\n\n", result);

    // Test case 2: Concatenating src to dst with smaller size
    char dst2[10] = "Hello";
    unsigned int size2 = 10;
    result = ft_strlcat(dst2, src, size2);
    printf("Test case 2:\n");
    printf("Expected output: Hello Wo\n");
    printf("Actual output: %s\n", dst2);
    printf("Return value: %u\n\n", result);

    // Test case 3: Concatenating empty string to dst
    char dst3[20] = "Hello";
    const char *src3 = "";
    unsigned int size3 = 20;
    result = ft_strlcat(dst3, src3, size3);
    printf("Test case 3:\n");
    printf("Expected output: Hello\n");
    printf("Actual output: %s\n", dst3);
    printf("Return value: %u\n\n", result);

    // Test case 4: Concatenating src to empty dst
    char dst4[20] = "";
    const char *src4 = "Hello World!";
    unsigned int size4 = 20;
    result = ft_strlcat(dst4, src4, size4);
    printf("Test case 4:\n");
    printf("Expected output: Hello World!\n");
    printf("Actual output: %s\n", dst4);
    printf("Return value: %u\n\n", result);

    return 0;
}