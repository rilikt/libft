/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:09 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/24 20:32:09 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[] = "069";
// 	char	str2[] = "Test12";
// 	char	str3[] = "";

// 	int j = ft_str_is_numeric(str1);
// 	printf("%d\n", j);

// 	j = ft_str_is_numeric(str2);
// 	printf("%d\n", j);

// 	j = ft_str_is_numeric(str3);
// 	printf("%d\n", j);
// }