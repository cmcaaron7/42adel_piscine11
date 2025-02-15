/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:40:02 by munchang          #+#    #+#             */
/*   Updated: 2025/02/15 18:07:22 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 126)
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

	x = "test123";
	y = "Œ";
	z = "";
	printf("%d\n", ft_str_is_printable(x));
	printf("%d\n", ft_str_is_printable(y));
	printf("%d\n", ft_str_is_printable(z));
}
*/
