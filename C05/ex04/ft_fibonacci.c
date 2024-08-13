/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:01:37 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/13 17:35:40 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculat(int index, int f_num)
{
	int	i;
	int	temp;
	int	s_num;

	i = 1;
	f_num = 0;
	s_num = 1;
	while (i <= index)
	{
		if (i > 1)
		{
			temp = f_num;
			f_num = s_num;
			s_num = s_num + temp;
		}
		i++;
	}
	return (s_num);
}

int	ft_fibonacci(int index)
{
	int	f_num;

	f_num = 1;
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	return (calculat(index, f_num));
}

// int	main()
// {
// 	int i; 
// 	i = ft_fibonacci(7);
// 	printf("%d",i); 
// 	return (0);
// }