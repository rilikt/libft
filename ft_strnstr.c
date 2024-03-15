/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:17:13 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/14 17:38:20 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t count)
{
	int					len;
	unsigned long int	i;
	int					j;
	char *str;
	char *find;

	str = (char *)haystack;
	find = (char *)needle;
	i = 0;
	j = 0;
	if (find[i] == '\0' || find == NULL)
		return (str);
	len = ft_strlen(find);
	while (str[i] && count > i)
	{
		j = 0;
		while (str[i] == find[j])
		{
			j++;
			i++;
		}
		if (len == j)
			return (str + (i - j));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 10);
	printf("%s\n", ptr);
	return (0);
}