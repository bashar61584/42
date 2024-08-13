/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:20:07 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/13 17:51:32 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrts(int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (i * i == n)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 1 || nb == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	checkj(int p, int nb)
{
	while (p <= nb)
	{
		if (nb % p == 0)
		{
			if (!sqrts(p))
				return (1);
			break ;
		}
		p++;
	}
	return (0);
}

int	checknext(int nb)
{
	int	i;
	int	p;
	int	j;

	i = 0;
	j = 0;
	while (i == 0)
	{
		p = 2;
		if ((nb % 2 == 0 && nb != 0) || nb == 1)
			nb += 1;
		else
			nb += 2;
		if (nb == 2)
			return (nb);
		if (checkj(p, nb) == 1)
			i = 1;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (checknext(nb));
}

// int main ()
// {
// 	printf("%d ",ft_find_next_prime(1));
// 	return (0); 
// }