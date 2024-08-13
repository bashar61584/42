/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:55:13 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/08 18:53:06 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	counter;

	counter = 0;
	res = 0;
	while (res == 0 && !(s1[counter] == '\0' && s2[counter] == '\0'))
	{
		res = s1[counter] - s2[counter];
		counter++;
	}
	return (res);
}
