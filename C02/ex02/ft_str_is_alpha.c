/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:13:19 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/06 20:23:53 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '@' || (*str >= '[' && *str <= '`') || *str >= '{')
			i++;
		str++;
	}
	if (i > 0)
		return (0);
	else
		return (1);
}
