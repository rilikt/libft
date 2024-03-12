/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:02:16 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/12 13:42:53 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Description

// The strncmp() function compares string1 and string2 to the maximum of count.

// Return Value

// The strncmp() function returns a value indicating the relationship between the strings, as follows:

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

// #include <unistd.h>
// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hallo";
// 	int n = 4;

// 	int	i = ft_strncmp(str1, str2, n);
// 	printf("%d\n", i);
// }
