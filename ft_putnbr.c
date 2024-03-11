/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:03:25 by timschmi          #+#    #+#             */
/*   Updated: 2024/01/31 14:40:24 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		ft_print('-');
		i = i * (-1);
	}
	if (i < 10)
	{
		ft_print(i + '0');
	}
	else
	{
		ft_putnbr(i / 10);
		ft_print(i % 10 + '0');
	}
}

// int	main(void)
// {
// 	int	i;

// 	i = 0364;
// 	ft_putnbr(i);
// }
