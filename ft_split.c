/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:55:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/15 15:02:03 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int multi;

	i = 0;
	multi = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			multi = 1;
		i++;
	}
	return (count * multi);
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

static void ft_free(char **arr, int i)
{
	while (i-- > 0)
		free(arr[i]);
	free(arr);
}

static int	pop_arr(char **arr, char const *s, char c, int str_count)
{
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str_count > i)
	{
		while (s[j] == c)
			j++;
		len = word_len(s + j, c);
		if (!(arr[i] = ft_substr(s, j, len)))
		{
			ft_free(arr, i);
			return (0);
		}
		j += len + 1;
		i++;
	}
	return (1);
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
	if (!pop_arr(arr, s, c, str_count))
		return (NULL);
	return (arr);
}

int	main(void)
{
	// char *s = "split this string";
	// char c = 's';
	char **split;
	int n;
	int i;

	split = ft_split("xxxxxxxxhello!", 'x');
	n = ft_count("xxxxxxxxhello!", 'x');
	i = 0;
	if (!split)
	{
		printf("epic fail\n");
		return (0);
	}
	while (i <= n)
	{
		printf("String %d: %s\n", i, split[i]);
		free (split[i]);
		i++;
	}
	free (split);
}