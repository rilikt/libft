/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:56:28 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/24 21:46:35 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i] != 32)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	str1[] = "Make All These UpperCase";

// 	printf("%s\n", str1);
// 	char *str = ft_strupcase(str1);
// 	printf("%s\n", str);
// }