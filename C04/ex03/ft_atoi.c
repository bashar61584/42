/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:26:58 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/12 02:35:23 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 1;
	num = 0;
	while (*str == '-' || *str == '+' || *str == ' ')
	{
		if (*str == '-')
		{
			i *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = *str - '0' + (num * 10);
		str++;
	}
	return (num * i);
}
// int	main()
// {
// 	ft_atoi("    ---- -- +2323bcn");
// 	return (0);
// }
