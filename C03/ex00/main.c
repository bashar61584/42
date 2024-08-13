/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:22:38 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/07 15:51:19 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int	main (void)
{
	char	str1[]= "a";
	char	str2[]= "a";
	
	printf("%d",ft_strcmp(&str1, &str2));

	return (0);
}
