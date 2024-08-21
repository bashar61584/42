/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:01:09 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/08 18:56:06 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int		i;

	i = 0;
	temp = str;
	if (*to_find == '\0')
		return (temp);
	while (*temp)
	{
		if (*temp == *to_find)
		{
			i = 0;
			while (temp[i] == to_find[i] && to_find[i] != '\0')
				i++;
			if (to_find[i] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
qq