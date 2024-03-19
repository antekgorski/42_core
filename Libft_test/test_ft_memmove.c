#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main()
{
   // Test when n is 0
    char buffer1[10] = "abcdefghi";
    char buffer1_std[10] = "abcdefghi";
    printf("ft_memmove(buffer1, buffer1 + 2, 0): %s\n", (char*)ft_memmove(buffer1, buffer1 + 2, 0));
    printf("memmove(buffer1_std, buffer1_std + 2, 0): %s\n", (char*)memmove(buffer1_std, buffer1_std + 2, 0));

    // Test when src is before dest
    char buffer2[10] = "abc";
    char buffer2_std[10] = "abcdefghi";
    printf("ft_memmove(buffer2, buffer2 + 2, 5): %s\n", (char*)ft_memmove(buffer2, buffer2 + 2, 5));
    printf("memmove(buffer2_std, buffer2_std + 2, 5): %s\n", (char*)memmove(buffer2_std, buffer2_std + 2, 5));

    // Test when dest is before src
    char buffer3[10] = "abcdefghi";
    char buffer3_std[10] = "abc";
    printf("ft_memmove(buffer3 + 2, buffer3, 5): %s\n", (char*)ft_memmove(buffer3 + 2, buffer3, 5));
    printf("memmove(buffer3_std + 2, buffer3_std, 5): %s\n", (char*)memmove(buffer3_std + 2, buffer3_std, 5));

    return (0);
}