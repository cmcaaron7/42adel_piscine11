/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munchang <munchang@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:53:45 by munchang          #+#    #+#             */
/*   Updated: 2025/01/24 11:05:18 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char alphabet;
	alphabet = 'z';

	while (alphabet >= 'a')
	{
	write(1, &alphabet, 1);
	alphabet--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
