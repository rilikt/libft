/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:25:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/15 18:17:22 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 1;
	len = ft_strlen(s1);
	while (s1[i] && check_char(s1[i], set))
		i++;
	while (s1[len - j] && check_char(s1[len - j], set))
		j++;
	if (i == len)
		return(ft_calloc(1, 1));
	return (ft_substr(s1, i, len - i - j +1));
}

// int main(void)
// {
// 	// char s1[] = "obobTrim the o's from thisooob";
// 	// char set[]= "ob";

// 	char *trim = ft_strtrim("", "cdef");
// 	printf("%s\n", trim);
// }