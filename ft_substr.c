/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:06:06 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/12 14:30:44 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int i;

	i = 0;
	sub = (char *)malloc((len +1) * sizeof(char));
	while (s[start] && len > i)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

#include <stdio.h>

// int main(void)
// {
// 	char str[] = "split this string";
// 	char *sub;

// 	sub = ft_substr(str, 1, 10);
// 	printf("%s\n", sub);
// }