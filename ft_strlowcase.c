/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:11:48 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/24 20:36:24 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && str[i] != 32)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	str1[] = "Make All These LowerCase";

// 	printf("%s\n", str1);
// 	char *str = ft_strlowcase(str1);
// 	printf("%s\n", str);
// }