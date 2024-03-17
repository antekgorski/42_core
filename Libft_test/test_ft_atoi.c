#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test_ft_atoi(const char *str)
{
	int	ft_result;
	int	orig_result;

	ft_result = ft_atoi(str);
	orig_result = atoi(str);
	if (ft_result == orig_result)
	{
		printf("Test passed: '%s' - ft_atoi: %d, atoi: %d\n", str, ft_result,
			orig_result);
	}
	else
	{
		printf("Test failed: '%s' - ft_atoi: %d, atoi: %d\n", str, ft_result,
			orig_result);
	}
}

int	main(void)
{
	// Add your test cases here
	test_ft_atoi("42");
	test_ft_atoi("-123");
	test_ft_atoi("0");
	test_ft_atoi("2147483647");
	test_ft_atoi("-2147483648");
	test_ft_atoi("  42");
	test_ft_atoi("  -123");
	test_ft_atoi("  0");
	test_ft_atoi("  2147483647");
	test_ft_atoi("  -2147483648");
	test_ft_atoi("42abc");
	test_ft_atoi("abc42");
	test_ft_atoi("  abc42");
	test_ft_atoi("  42abc");
	test_ft_atoi("98765499999999999999999999999932109876");
    test_ft_atoi("-98765499999999999999999999999932109876");
	test_ft_atoi("---98765499999999999999999999999932109876");
	test_ft_atoi("---98765");
    test_ft_atoi("!@#$%$@^&^(*())");
    test_ft_atoi("2147483647");
    test_ft_atoi("-2147483648");

	printf("All tests completed.\n");

	return (0);
}