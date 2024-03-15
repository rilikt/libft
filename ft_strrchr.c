/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:13:06 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/15 15:45:47 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description

// The strchr() function finds the first occurrence of a character in a string.
// The character c can be the null character (\0); the ending
// null character of string is included in the search.

// The strchr() function operates on null-ended strings. The string arguments
// to the function should contain
// a null character (\0) that marks the end of the string.

// Return Value

// The strchr() function returns a pointer to the first occurrence of c that
// is converted to a character in string.
// The function returns NULL if the specified character is not found.

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*st;
	int		len;

	st = (char *)str;
	ch = (char)c;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (ch == st[len])
			return (st + len);
		len--;
	}
	return (0);
}

// int main(void)
// {
//   char buffer1[40] = "computer program";
//   char * ptr;
//   int    ch = 'p';

//   ptr = ft_strchr( buffer1, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",
//             ch, buffer1, ptr );

// }