/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:29:40 by munchang          #+#    #+#             */
/*   Updated: 2025/02/16 15:54:27 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num <= -2147483648)
		num = -2147483648;
	else if (num >= 2147483647)
		num = 2147483647;
	if (num < 0)
	{
		write(1, "-", 1);
		num = num * (-1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	num = (num % 10) + '0';
	write(1, &num, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-498756);
	write(1, "\n", 1);
	ft_putnbr(777777777);
}
*/
