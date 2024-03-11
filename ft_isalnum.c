/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:39:32 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/06 12:03:11 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	str1[] = "069";
// 	char	str2[] = "Test12";
// 	char	str3[] = " ";

// 	int j = ft_isalnum(str1);
// 	printf("%d\n", j);

// 	j = ft_isalnum(str2);
// 	printf("%d\n", j);

// 	j = ft_isalnum(str3);
// 	printf("%d\n", j);
// }