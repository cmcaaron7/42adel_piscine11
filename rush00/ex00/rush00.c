/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:11:32 by efarias-          #+#    #+#             */
/*   Updated: 2025/02/02 14:26:22 by munchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_character(int row, int column, int x, int y)
{
	if (row == 1 || row == y)
	{
		if (column == 1 || column == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (column == 1 || column == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			print_character(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
