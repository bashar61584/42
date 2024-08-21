/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:06:41 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/18 20:06:47 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	deff;
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
	}
	deff = max - min;
	result = (int *)malloc (sizeof(int) * deff);
	if (result == NULL)
		return (-1);

	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (deff);
}

// int	main()
// {
// 	int	size;
// 	int	*tab;

// 	size = ft_ultimate_range(&tab, 0, 5);
// 	printf("%d",size);
// 	return (0);

int **ptr2=&tab; 
**ptr2=2;
// }
