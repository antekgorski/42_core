#include <stdio.h>
#include <stdlib.h>

int	*ft_words_alloc(char const *s, char c)
{
	int	i;
	int	start;
	int	end;
	int *array = malloc(30 * sizeof(int));
	int j = 0;

	i = 0;
	start = 0;
	end = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0')
			start = i + 1;
		else if (*(s + i) != c && *(s + i - 1) == c)
		{
			end = i;
			array[j++] = (end - start);
		}
		i++;
	}
    return (array);
}

int main()
{
   int *ar;
    ar = (ft_words_alloc("1 22 333 4444 55555", ' '));
    printf("%d", ar[3]);
    return (0);
}