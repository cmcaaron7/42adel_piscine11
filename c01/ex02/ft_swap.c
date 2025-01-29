/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:18:15 by munchang          #+#    #+#             */
/*   Updated: 2025/01/28 20:00:44 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	dummy;

	dummy = *a;
	*a = *b;
	*b = dummy;
}
/*
int	main(void)
{
	int a = 88;
	int b = 42;

	ft_swap(&a, &b);
	printf ("a = %d, b = %d\n", a, b);
	return (0);
}
*/
