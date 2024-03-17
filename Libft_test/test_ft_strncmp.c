#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_strncmp(const char *s1, const char *s2, size_t n) {
    int result1 = ft_strncmp(s1, s2, n);
    int result2 = strncmp(s1, s2, n);
    
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("n: %zu\n", n);
    printf("ft_strncmp: %d\n", result1);
    printf("strncmp: %d\n", result2);
    printf("Comparison: %s\n\n", (result1 == result2) ? "Match" : "Mismatch");
}

int main() {
    // Test cases
    test_strncmp("abc", "abc", 3);
    test_strncmp("abc", "def", 3);
    test_strncmp("abc", "abcd", 3);
    test_strncmp("abcd", "abc", 3);
    
    return 0;
}