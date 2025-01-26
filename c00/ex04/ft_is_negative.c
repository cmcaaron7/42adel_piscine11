/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:57:07 by munchang          #+#    #+#             */
/*   Updated: 2025/01/26 16:35:34 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (num >= 0)
	{
		write (1, &p, 1);
		num--;
	}
	else
	{
		write (1, &n, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative (-1);
	return (0);
}
*/
