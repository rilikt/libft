/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:56:06 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/24 20:34:11 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[] = "These are all printable char's ~";
// 	char	str2[] = "";

// 	int j = ft_str_is_printable(str1);
// 	printf("%d\n", j);

// 	j = ft_str_is_printable(str2);
// 	printf("%d\n", j);
// }