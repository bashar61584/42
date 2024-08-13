/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:15:25 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/10 11:00:10 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	y;
	char	z;

	y = 'N';
	z = 'P';
	if (n >= 0)
	{
		write (1, &"P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}
int main()
{
	ft_is_negative(34); 
	return (0);
}