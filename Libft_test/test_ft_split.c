
// #include "libft.h"

// static char	*ft_fill_word(const char *s, int start_word, int index)
// {
// 	int		i;
// 	char	*word;

// 	i = 0;
// 	word = malloc(sizeof(char) * (index - start_word + 1));
// 	if (word == NULL)
// 		return (NULL);
// 	while (start_word < index)
// 	{
// 		word[i] = s[start_word];
// 		i++;
// 		start_word++;
// 	}
// 	word[i] = '\0';
// 	return (word);
// }

// static int	to_many_line(char const *s, int index, int word_index, char **split)
// {
// 	int	i;

// 	i = 0;
// 	while (s[index] != '\0')
// 	{
// 		split[word_index] = malloc(ft_strlen(&s[index]) * sizeof(char) + 1);
// 		if (!split[word_index])
// 		{
// 			i = 0;
// 			while (split[i])
// 			{
// 				free(split[i]);
// 				i++;
// 			}
// 			free(split);
// 			return (-20);
// 		}
// 		split[word_index][i++] = s[index++];
// 	}
// 	split[word_index][i] = '\0';
// 	return (index);
// }

// static char	**ft_words_alloc(char const *s, char c, char **split,
// 		int start_word)
// {
// 	int	index;
// 	int	word_index;

// 	index = 0;
// 	word_index = 0;
// 	while (s[index] != '\0')
// 	{
// 		if (start_word == -1 && s[index] != c)
// 			start_word = index;
// 		else if (ft_strchr(&s[index], c) == NULL && start_word != -1)
// 		{
// 			index = to_many_line(s, index, word_index, split);
// 			if (index == -20)
// 				return (NULL);
// 		}
// 		else if (start_word != -1 && (s[index] == c || s[index + 1] == '\0'))
// 		{
// 			split[word_index++] = ft_fill_word(s, start_word, index);
// 			start_word = -1;
// 		}
// 		index++;
// 	}
// 	return (split);
// }

// static int	ft_nbr_words(char const *s, char c)
// {
// 	size_t	i;
// 	int		num;

// 	num = 0;
// 	i = 0;
// 	if (*s != c && *s != '\0')
// 		num++;
// 	while (*(s + i) != '\0')
// 	{
// 		if (*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0')
// 			num++;
// 		i++;
// 	}
// 	return (num);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**split;
// 	int		start_word;

// 	start_word = -1;
// 	if (s == NULL)
// 		return (NULL);
// 	split = (malloc)((ft_nbr_words(s, c) + 1) * (sizeof(char *)));
// 	if (split == NULL)
// 		return (NULL);
// 	split[ft_nbr_words(s, c)] = NULL;
// 	return (ft_words_alloc(s, c, split, start_word));
// }


int main ()
{
	char	**arr;
	int		i;
	char	c[] = "//dr/wal jda/cde/k 33dd/dd// 1/2  //";
	char d = '/';
	char	e[] = "dada";// a a 2
	char	e1[] ="addaddda";//a a a 3
	char	e2[] ="adddddadd";//a a 2
	char	e3[] ="adddddaddad";//a a a 2
	char	e4[] ="add";// a 0
	char	e5[] ="dd";//0
	char	e6[] ="d";//0
	char	e7[] ="a";//0
	char	e8[] = "da";// a
	char	e9[] ="aada";//aa a 1
	char	e10[] ="dda";//a 0
	char	e11[] ="aaadd";//aaa  0
	char	e12[] ="aaadda";//aaa a 1
	char	e13[] ="";//0
	char	e14[] ="ddad";//a 0
	//char	e15[] =NULL;
	char	e16[] ="ada";//a a 1
	char	e17[] ="ddaddddaaaaddd";//a aaaa 1
	char	e18[] ="ad";
	char f = 'd';
			 arr = ft_split(e10, f);
	printf("%s\nORGINAL\n", e10);
	//arr = ft_split("ddtripouilledd42dd", 'd');
	i = 0;
	//printf("%s  -arr[i] \n", arr[0]);
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
	// size_t i;
	// char	d[] = "//dr/wal jda/cde/k 33dd/dd// 1/2  //";
	// char c = '/';
	//i = ft_split(d, c);
	//printf("%ld i",ft_split(d, c));
	f = 'd';
			 arr = ft_split(e1, f);
	printf("%s\nORGINAL\n", e1);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
	 printf("///////////////////////////////////////\n");
	f = 'd';
			 arr = ft_split(e11, f);
	printf("%s\nORGINAL\n", e11);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e12, f);
	printf("%s\nORGINAL\n", e12);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e13, f);
	printf("%s\nORGINAL\n", e13);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e14, f);
	printf("%s\nORGINAL\n", e14);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e16, f);
	printf("%s\nORGINAL\n", e16);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e17, f);
	printf("%s\nORGINAL\n", e17);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e2, f);
	printf("%s\nORGINAL\n", e2);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e3, f);
	printf("%s\nORGINAL\n", e3);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e4, f);
	printf("%s\nORGINAL\n", e4);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e5, f);
	printf("%s\nORGINAL\n", e5);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e6, f);
	printf("%s\nORGINAL\n", e6);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e7, f);
	printf("%s\nORGINAL\n", e7);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e8, f);
	printf("%s\nORGINAL\n", e8);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e9, f);
	printf("%s\nORGINAL\n", e9);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
	 printf("///////////////////////////////////////\n");
f = 'd';
			 arr = ft_split(e18, f);
	printf("%s\nORGINAL\n", e18);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
	 printf("///////////////////////////////////////\n");
			arr = ft_split("//dr/wal jda/cde/k 33dd/dd// 1/2  //", ' ');
	// printf("%s\nORGINAL\n", c);
	i = 0;
	 while (arr[i] != NULL)
	 {
		printf("%s--\n%d number of rows\n", arr[i],i);
		i++;
	 }
	 printf("///////////////////////////////////////\n");
	// arr = ft_split
	// ("lorem ipsum dolor sit amet, consectetur
	//  adipiscing elit. Sed non risus. Suspendisse", ' ');
	//  while (arr[i] != NULL)
	//  {
	//  	printf("%s--\n%d number of rows\n", arr[0],i);
	// 	i++;
	//  }
	//  printf("///////////////////////////////////////\n");
printf("END\n");
	return (0);
}