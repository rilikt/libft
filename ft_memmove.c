/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:17:03 by timschmi          #+#    #+#             */
/*   Updated: 2024/03/07 12:56:06 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int count)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (count > 0)
	{
		d[count -1] = s[count -1];
		count--;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	x[] = "abcdefghi";
	char	y[] = "abcdefghi";

	memmove(&x[3], &x[0], 4);
	printf("after memmove: %s\n", x);
	ft_memmove(&y[3], &y[0], 4);
	printf("after memcpy:  %s\n", y);
}

// #define SIZE    21

// char target[SIZE] = "a shiny white sphere";

// int main( void )
// {
//   char * p = target + 8;  /* p points at the starting character
//                           of the word we want to replace */
//   char * source = target + 2; /* start of "shiny" */

//   printf( "Before memmove, target is \"%s\"\n", target );
//   ft_memcpy( p, source, 5 );
//   printf( "After memmove, target becomes \"%s\"\n", target );
// }