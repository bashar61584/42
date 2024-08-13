/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:36:27 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/04 19:10:20 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == 1))
				ft_putchar ('A');
			else if ((row == 1 && col == x) || (col == x && row == y))
				ft_putchar ('C');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar (' ');
			else
				ft_putchar ('B');
			col++;
		}
		ft_putchar ('\n');
		row++;
	}
}
