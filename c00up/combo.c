/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:09:31 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/10 11:25:33 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	char	x;
	char	y;
	char	z;

	x = a + '0';
	y = b + '0';
	z = c + '0';
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
	if (a < 7)
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}

}

int	main(void)
{
	ft_print_comb();
	return (0);
}
