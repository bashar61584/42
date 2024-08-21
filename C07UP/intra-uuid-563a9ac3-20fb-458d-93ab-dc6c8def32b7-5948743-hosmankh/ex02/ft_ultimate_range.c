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
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	a;
	int	*arr;
	int	i;

	a = ft_ultimate_range(&arr, 1, 20);
	if (a > 0)
	{
		i = 0;
		while (i < a)
		{
			printf("%d\n", arr[i]);
			i++;
		}
		free(arr);
	}
	else if (a == -1)
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
