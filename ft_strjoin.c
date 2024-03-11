/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:16:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/11 14:02:11 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void	ft_bzero(void *s, unsigned int n)
// {
// 	unsigned char	*p;

// 	p = (unsigned char *)s;
// 	while (n > 0)
// 	{
// 		*p = 0;
// 		p++;
// 		n--;
// 	}
// }

// void	*ft_calloc(size_t num, size_t size)
// {
// 	void	*ptr;

// 	if (num == 0 || size == 0)
// 		return (NULL);
// 	ptr = malloc(num * size);
// 	ft_bzero(ptr, num);
// 	return (ptr);
// }

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*str != '\0')
// 	{
// 		i++;
// 		str++;
// 	}
// 	return (i);
// }

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len])
	{
		len++;
	}
	while (source[i] && len < size)
	{
		dest[len] = source[i];
		len++;
		source++;
	}
	dest[len] = '\0';
	return (len);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*str;

	total_len = ft_strlen(s1) + ft_strlen(s2) +1;
	printf("%d\n", total_len);
	str = (char *)ft_calloc(total_len, sizeof(char));
	ft_strlcat(str, s1, total_len);
	ft_strlcat(str, s2, total_len);
	return (str);
}


int	main(void)
{
	char s1[] = "Hello, ";
	char s2[] = "world!";
	char *join;
	join = ft_strjoin(s1, s2);

	printf("Concatenated string: %s\n", join);

	return (0);
}