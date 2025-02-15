/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.orgi.au> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 19:43:15 by munchang          #+#    #+#             */
/*   Updated: 2025/02/15 19:55:30 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i])
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "phrase";
	s2 = "phrase";
	printf("Comparing ");
}
