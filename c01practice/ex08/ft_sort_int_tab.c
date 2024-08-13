/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:56:27 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/05 23:37:01 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	f_count;
	int	s_count;
	int	swap;

	f_count = 0;

	while (f_count < size)
	{
		s_count = f_count + 1;
		while (s_count < size)
		{
			if (tab[f_count] > tab[s_count])
			{
				swap = tab[f_count];
				tab[f_count] = tab[s_count];
				tab[s_count] = swap;
			}
			s_count++;
		}
		f_count++;
	}
}
