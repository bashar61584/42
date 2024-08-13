/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:01:09 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/08 18:55:32 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[count] != '\0' && n > 0)
	{
		dest[len + count] = src[count];
		count++;
		n--;
	}
	dest[len + count] = '\0';
	return (dest);
}
