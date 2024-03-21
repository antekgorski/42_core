#include <stdio.h>
#include <string.h>
#include "libft.h"

// Function to test ft_strtrim
char	*ft_strtrim(char const *s1, char const *set);

int main()
{
    // Test case 1: Trim leading and trailing spaces
    char str1[] = "   Hello, World!   ";
    char set1[] = " ";
    char *trimmed1 = ft_strtrim(str1, set1);
    printf("Trimmed string: '%s'\n", trimmed1); // Expected output: "Hello, World!"

    // Test case 2: Trim leading and trailing characters from set
    char str2[] = "###Hello, World!###";
    char set2[] = "#";
    char *trimmed2 = ft_strtrim(str2, set2);
    printf("Trimmed string: '%s'\n", trimmed2); // Expected output: "Hello, World"

    // Test case 3: No trimming required
    char str3[] = "Hello, World!";
    char set3[] = " ";
    char *trimmed3 = ft_strtrim(str3, set3);
    printf("Trimmed string: '%s'\n", trimmed3); // Expected output: "Hello, World!"

    return 0;
}