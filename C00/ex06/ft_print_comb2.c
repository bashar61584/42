/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:34:22 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/10 12:28:16 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c, int d)
{
	char	x;
	char	y;
	char	z;
	char	r;

	x = a + '0';
	y = b + '0';
	z = c + '0';
	r = d + '0';
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, " ", 2);
	write (1, &z, 1);
	write (1, &r, 1);
	write (1, ",", 2);
}

void	second(int i, int j)
{
	int	k;
	int	l;

	k = 0;
	while (k <= 9)
	{
		l = k+1;
		while (l <= 9)
		{
			ft_putchar(i, j, k, l);
			l++;
		}
		k++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;


	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			second(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
