/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:14:24 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/06 18:55:08 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, unsigned int count)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *)dest;
	v = (unsigned char)c;
	while (count > 0)
	{
		*p = c;
		p++;
		count--;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "This is an example string";

	printf("%s\n", str);
	ft_memset(str, '*', 7);
	printf("%s\n", str);
	return (0);
}
