/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:48:56 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/17 13:49:00 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	def;
	int	len;
	int	*dest;
	if (max == 0)
		return (0);
		
	def = max - min;
	len = 0;
	dest = (int *)malloc(sizeof(int) * def);
	while (def > 0)
	{
		dest[len] = min + len;
		len++;
		def--;
	}
	return (dest);
}

// int	main()
// {
// 	 int	*tab; 
// 	 tab = ft_range(5, 10); 
// 	 for (int i =0; i<5; i++)
// 	 {
// 		printf("%d",tab[i]); 
// 	 }
// 	return (0); 
// }