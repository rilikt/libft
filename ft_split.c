/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:55:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/12 17:14:14 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count (char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c || s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return(count);
}

static int word_len(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return(len);
}

static void pop_arr(char **arr, char const *s, char c, int str_count)
{
	int len;
	int i;
	int j;
	char *ptr;
	
	j = 0;
	i = 0;
	while(*s == c)
		s++;
	while (str_count > i)
	{
		len = word_len(s + j, c);
		arr[i] = ft_substr(s, j, len);
		j += len +1;
		printf("String%d:%s\n", i,arr[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int str_count;
	char **arr;

	str_count = ft_count(s, c);
	printf("count:%d\n", str_count);
	arr = (char **)malloc((str_count +1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[str_count] = NULL;
	pop_arr(arr, s, c, str_count);
	return (arr);
}

// void	printStrings(char strings[][100], int rows)
// {
// 	for (int i = 0; i < rows; i++)
// 	{
// 		printf("%s\n", strings[i]);
// 	}
// }

int	main(void)
{
	char *s = "split this string";
	char c = ' ';
	char **split;

	split = ft_split(s, c);

	// int rows = sizeof(split) / sizeof(split[0]);
	// printStrings(split, rows);
	printf("%s\n", split[4]);
}