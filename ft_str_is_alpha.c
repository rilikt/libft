/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:03:53 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/24 21:32:47 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str1[] = "Thisstringonlycontainsalphabeticalchars";
// 	char	str2[] = "This 1 doesn't";
// 	char	str3[] = "";

// 	int j = ft_str_is_alpha(str1);
// 	printf("%d\n", j);

// 	j = ft_str_is_alpha(str2);
// 	printf("%d\n", j);

// 	j = ft_str_is_alpha(str3);
// 	printf("%d\n", j);

// }