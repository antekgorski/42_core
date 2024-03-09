#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

// Function declaration
void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    // Test case 1: Copying a string to another string
    char src1[10] = "Hello";
    char dest1[10];
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    printf("Test case 1: Copied string is '%s'\n", dest1);

    // Test case 2: Copying an integer array to another array
    int src2[] = {1, 2, 3, 4, 5};
    int dest2[5];
    ft_memcpy(dest2, src2, sizeof(src2));
    printf("Test case 2: Copied array is ");
    for (int i = 0; i < sizeof(dest2) / sizeof(dest2[0]); i++)
    {
        printf("%d ", dest2[i]);
    }
    printf("\n");

    // Test case 3: Copying a float array to another array
    float src3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float dest3[5];
    ft_memcpy(dest3, src3, sizeof(src3));
    printf("Test case 3: Copied array is ");
    for (int i = 0; i < sizeof(dest3) / sizeof(dest3[0]); i++)
    {
        printf("%.1f ", dest3[i]);
    }
    printf("\n");

    char src[50] = "Hello, World!";
    char dest11[50];
    char dest22[50];

    ft_memcpy(dest11, src, strlen(src) + 1);
    memcpy(dest22, src, strlen(src) + 1);

    assert(strcmp(dest11, dest22) == 0);

    printf("Test passed.\n");

    return 0;
}
