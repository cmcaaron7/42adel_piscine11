/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:59:34 by munchang          #+#    #+#             */
/*   Updated: 2025/02/15 18:08:48 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*x;
	char	*y;
	char	*z;

	x = "valhalla";
	y = "BINGO";
	z = "";
	printf("%d\n", ft_str_is_lowercase(x));
	printf("%d\n", ft_str_is_lowercase(y));
	printf("%d\n", ft_str_is_lowercase(z));
}
*/
