/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:05:10 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/14 15:50:18 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcpy() function copies n bytes from memory area src to memory area
// dst.  If dst and src overlap, behavior is undefined.  Applications in
// which dst and src might overlap should use memmove(3) instead.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	x[] = "abcdefghi";
// 	char	y[] = "abcdefghi";

// 	memcpy(&x[3], &x[0], 6);
// 	printf("after memmove: %s\n", x);
// 	ft_memcpy(&y[3], &y[0], 6);
// 	printf("after memcpy:  %s\n", y);
// }

// #define MAX_LEN 80

// char	source[MAX_LEN] = "This is the source string";
// char	target[MAX_LEN] = "This is the target string";

// int	main(void)
// {
// 	printf("Before memcpy, target is \"%s\"\n", target);
// 	ft_memcpy(target, source, sizeof(source));
// 	printf("After memcpy, target becomes \"%s\"\n", target);
// }
