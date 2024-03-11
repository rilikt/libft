/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:05:10 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/07 13:11:34 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int count)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (count > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main() {
	char x[] = "abcdefghi";
	memcpy(&x[3], &x[0], 6);
	printf("after memmove: %s\n", x);

	char y[] = "abcdefghi";
	ft_memcpy(&y[3], &y[0], 6);
	printf("after memcpy:  %s\n", y);
}


// #define MAX_LEN 80

// char	source[MAX_LEN] = "This is the source string";
// char	target[MAX_LEN] = "This is the target string";

// int	main(void)
// {
// 	printf("Before memcpy, target is \"%s\"\n", target);
// 	ft_memcpy(target, source, sizeof(source));
// 	printf("After memcpy, target becomes \"%s\"\n", target);
// }
