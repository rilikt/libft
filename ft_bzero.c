/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:51:50 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/11 14:13:07 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

#include <stdio.h>
#include <string.h>

// int	main(void)
// {
// 	char str[] = "This is an example string";

// 	printf("%s\n", str);
// 	ft_bzero(str, sizeof(str[0]));
// 	printf("%s\n", str);
// 	return (0);
// }