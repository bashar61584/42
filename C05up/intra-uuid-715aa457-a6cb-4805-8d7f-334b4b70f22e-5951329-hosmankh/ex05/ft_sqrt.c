/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 01:43:03 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/13 01:53:11 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;

	if (nb <= 0)
		return (0);
	left = 1;
	right = nb;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid == nb / mid && nb % mid == 0)
			return (mid);
		if (mid <= nb / mid)
			left = mid + 1;
		else
			right = mid -1;
	}
	return (0);
}
