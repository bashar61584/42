/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:13:19 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/06 20:47:39 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str	<= 'Z'))
			i++;
		str++;
	}
	if (i > 0)
		return (0);
	else
		return (1);
}
