/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:46:25 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/11 13:10:56 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	size -= 1;
	i = 0;
	if (size == 0)
		return (0);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len])
	{
		len++;
	}
	return (len);
}

int main(void)
{
	char	str1[] = "Copy only n -1 chrarcters of this string.";
	char dest [15];

	printf("%s\n", str1);
	int i = ft_strlcpy(dest, str1, sizeof(dest));
	printf("%s\n", dest);
	printf("%d\n", i);
}
