#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*test(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		while (big[i] == little[i] && little[i] && i <= len)
		{
			if (!little[i + 1])
				return ((char *)big);
			++i;
		}
		++big;
	}
	return (NULL);
}

int main()
{
// Test when little is an empty string
const char *big1 = "Hello, world!";
const char *little1 = "";
size_t len1 = strlen(big1);
printf("ft_strnstr: %s\n", ft_strnstr(big1, little1, len1));
printf("test: %s\n", test(big1, little1, len1));

// Test when little is not found in big
const char *big2 = "Hello, world!";
const char *little2 = "foo";
size_t len2 = strlen(big2);
printf("ft_strnstr: %s\n", ft_strnstr(big2, little2, len2));
printf("test: %s\n", test(big2, little2, len2));

// Test when little is found in big
const char *big3 = "Hello, world!";
const char *little3 = "world";
size_t len3 = strlen(big3);
printf("ft_strnstr: %s\n", ft_strnstr(big3, little3, len3));
printf("test: %s\n", test(big3, little3, len3));

// Test when len is smaller than the length of big
const char *big4 = "Hello, world!";
const char *little4 = "world";
size_t len4 = 5;
printf("ft_strnstr: %s\n", ft_strnstr(big4, little4, len4));
printf("test: %s\n", test(big4, little4, len4));
    return 0;
}