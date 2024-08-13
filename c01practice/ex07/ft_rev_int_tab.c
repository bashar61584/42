/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:56:27 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/05 22:56:40 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c_count;
	int	r_count;
	int	swap;

	r_count = size - 1;
	c_count = 0;
	swap = 0;
	while (c_count <= size / 2)
	{
		swap = tab[c_count];
		tab[c_count] = tab[r_count];
		tab[r_count] = swap;
		c_count++;
		r_count--;
	}
}
