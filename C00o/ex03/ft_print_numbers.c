/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:14:57 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/10 10:49:44 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	// char	i;

	// i = '0';
	// while (i <= '9')
	// {
	// 	write (1, &i, 1);
	// 	i++;
	// }
	int	i; 
	int j; 
	i=0; 

	char b[]="khan"; 
	j=0; 
	while(i<=9)
	{
		j=i+'0';
		write (1,&b,1); 
		i++; 
	}

}
int	main(void)
{
	ft_print_numbers(); 
}