#include <stdio.h>

#include <unistd.h>

int	length=0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		// write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		// ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		// ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
		length++; 

}

int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	ft_putnbr(124);
		printf("%d",length);
	
	// while (i < argc)
	// {
	// 	if(i == 1)
		
	// 	// printf("%s\n", argv[i]);
	// 	i++; 
	// }
	return (0); 
}