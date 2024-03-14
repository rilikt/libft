/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:55:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/14 12:42:05 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static void	pop_arr(char **arr, char const *s, char c, int str_count)
{
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (*s == c)
		s++;
	while (str_count > i)
	{
		len = word_len(s + j, c);
		arr[i] = ft_substr(s, j, len);
		j += len + 1;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		str_count;
	char	**arr;

	str_count = ft_count(s, c);
	arr = (char **)malloc((str_count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[str_count] = NULL;
	pop_arr(arr, s, c, str_count);
	return (arr);
}

// int	main(void)
// {
// 	char *s = "split this string";
// 	char c = 's';
// 	char **split;
// 	int n;
// 	int i;

// 	split = ft_split(s, c);
// 	n = ft_count(s,c);
// 	i = 0;
// 	while (i <= n)
// 	{
// 		printf("String %d: %s\n", i, split[i]);
// 		free (split[i]);
// 		i++;
// 	}
// 	free (split);
// }