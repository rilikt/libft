/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:19:07 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/15 16:48:15 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strdup reserves storage space for a copy of string by calling malloc.
// The string argument to this function is expected to contain a
// null character (\0) marking the end of the string.
// Remember to free the storage reserved with the call to strdup.

char	*ft_strdup(const char *src)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc((len +1) * 1);
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	src[] = "copy this to a new string";
// 	char	*str;

// 	str = ft_strdup(src);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
