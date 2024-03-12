/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:19:07 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/12 13:56:53 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(len * 1);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "copy this to a new string";
// 	char	*str;

// 	str = ft_strdup(src);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
