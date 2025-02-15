/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:05:07 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/02 14:25:25 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* This function writes a single character to the standard output*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
