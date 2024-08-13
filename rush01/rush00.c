/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 02:28:34 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/04 02:38:22 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	lengthy;
	int	widthx;

	lengthy = 1;
	while (lengthy <= y)
	{
		widthx = 1;
		while (widthx <= x)
		{
			logic(lengthy, widthx, x, y);
			widthx++;
		}
		ft_putchar ('\n');
		lengthy++;
	}
}

void	logic(int lengthy, int widthx, int x, int y)
{
	if ((lengthy == 1 && widthx == 1) || (lengthy == 1 && widthx == x))
		ft_putchar('o');
	else if (lengthy == 1 && widthx >= 2 && widthx <= 4)
		ft_putchar('-');
	else if ((lengthy > 1 && lengthy < y) && (widthx == 1 || widthx == x))
		ft_putchar('|');
	else if ((lengthy > 1 && lengthy < y) && (widthx > 1 && widthx -1 < x))
		ft_putchar(' ');
	else if ((lengthy == y && widthx == 1) || (lengthy == y && widthx == x))
		ft_putchar('o');
	else if (lengthy == y && widthx >= 2 && widthx <= 4)
		ft_putchar('-');
	else
		ft_putchar ('o');
}
