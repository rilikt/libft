/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:16:41 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/07 13:42:02 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *source, size_t size)
{
	int len;
	len = 0;
	int i;
	i = 0;

	while(dest[len])
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

#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string: %zu\n", result);

    return 0;
}