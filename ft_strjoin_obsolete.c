/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:55:52 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/06 11:32:58 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	total_len(char **strs, int size)
{
	int	len;
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < size)
	{
		len = ft_strlen(strs[i]);
		total += len;
		i++;
	}
	if (total == 0)
		return (0);
	else
		return (total);
}

int	ft_kat(char *arr, char **strs, int i, int k)
{
	int	j;

	j = 0;
	while (strs[i][j] != '\0')
	{
		arr[k] = strs[i][j];
		j++;
		k++;
	}
	return (k);
}

int	ft_kat2(char *arr, char *sep, int k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		arr[k] = sep[j];
		k++;
		j++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*arr;
	int		i;
	int		k;

	k = 0;
	i = 0;
	if (size == 0)
	{
		arr = (char *)malloc(1 * sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	total = total_len(strs, size) + ft_strlen(sep) + 1;
	arr = (char *)malloc((total) * 1);
	while (i < size)
	{
		k = ft_kat(arr, strs, i, k);
		if (k < (total))
			k = ft_kat2(arr, sep, k);
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	char	*arr[4];
	char	*str;

	arr[0] = "test";
	arr[1] = "test";
	arr[2] = "test";
	str = ft_strjoin(1, arr, "!");
	printf("%s\n", str);
}
