/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:17:13 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/07 17:01:06 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *find, size_t count)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (find[len])
		len++;
	while (str[i] && count > i)
	{
		j = 0;
		while (str[i] == find[j])
		{
			i++;
			j++;
		}
		if (len == j)
		{
			return ((char *)str + (i - j));
			break ;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 10);
	printf("%s\n", ptr);
	return (0);
}