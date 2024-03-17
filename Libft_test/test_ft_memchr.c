#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{

    // Test 1
    char s1[] = "Hello, World!";
    char *r1 = ft_memchr(s1, 'W', 13);
    char *e1 = memchr(s1, 'W', 13);
    printf("Test 1\n");
    printf("Expected: %s\n", e1);
    printf("Returned: %s\n", r1);
    printf("\n");

    // Test 2
    char s2[] = "Hello, World!";
    char *r2 = ft_memchr(s2, 'W', 5);
    char *e2 = memchr(s2, 'W', 5);
    printf("Test 2\n");
    printf("Expected: %s\n", e2);
    printf("Returned: %s\n", r2);
    printf("\n");

    // Test 3
    char s3[] = "Hello, World!";
    char *r3 = ft_memchr(s3, 'W', 0);
    char *e3 = memchr(s3, 'W', 0);
    printf("Test 3\n");
    printf("Expected: %s\n", e3);
    printf("Returned: %s\n", r3);
    printf("\n");
    
    return 0;

}
