/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:17:13 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/15 14:30:12 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t count)
{
	int					len;
	unsigned long int	i;
	int					j;

	if (*find == '\0' || find == NULL)
		return ((char *)str);
	i = 0;
	j = 0;
	len = ft_strlen(find);
	while (str[i] && count > i)
	{
		j = 0;
		while (str[i] && str[i] == find[j] && count > i)
		{
			i++;
			j++;
		}
		if (len == j)
		{
			return ((char *)str + (i - j));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// const char *largestring = "Foo Bar Baz";
// 	// const char *smallstring = "Bar";
// 	char *ptr;

// 	ptr = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
// 	printf("%s\n", ptr);
// 	return (0);
// }