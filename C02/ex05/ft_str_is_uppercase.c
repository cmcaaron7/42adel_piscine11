/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:17:40 by munchang          #+#    #+#             */
/*   Updated: 2025/02/15 18:08:05 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

	x = "VALHALLA";
	y = "mahallo";
	z = "";
	printf("%d\n", ft_str_is_uppercase(x));
	printf("%d\n", ft_str_is_uppercase(y));
	printf("%d\n", ft_str_is_uppercase(z));
}
*/
