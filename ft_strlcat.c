/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:16:41 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/14 16:59:28 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	unsigned long int	dest_len;
	unsigned long int	source_len;
	unsigned long int	i;
	unsigned long int	max;

	dest_len = 0;
	source_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (source_len < size && source[source_len])
		source_len++;
	max = size - dest_len;
	if (max == 0)
		return (dest_len + source_len);
	while (source[i] && i < max - 1)
	{
		dest[dest_len + i] = source[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + source_len);
}

// if (size == 0)
// 	return (0);

// int main() {
//     char dest[10] = "Hello, ";
//     const char *src = "world!";
//     size_t result = ft_strlcat(dest, src, sizeof(dest));

//     printf("Concatenated string: %s\n", dest);
//     printf("Total length of concatenated string: %zu\n", result);

//     return (0);
// }