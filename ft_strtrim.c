/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:25:56 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/12 14:29:18 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int set_front(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else 
			j++;
	}
	return(i);
}

static int ft_trim_len(char const *s1, char const *set)
{
	int i;
	int j;
	int total;
	int len;

	j = 0;
	total = set_front(s1, set);
	len = ft_strlen(s1);
	i = len-1;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
			total++;
		}
		else
			j++; 
	}
	len -= total;
	return(len);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int front;
	int trim_len;
	
	front = set_front(s1, set);
	trim_len = ft_trim_len(s1, set);
	trim = ft_substr(s1, front, trim_len);

	printf("front: %d\ntrimlen:%d\n", front, trim_len);
	return (trim);
}


int main(void)
{
	char s1[] = "obobTrim the o's from thisooob";
	char set[]= "ob";

	char *trim = ft_strtrim(s1, set);
	printf("%s\n", trim);
}