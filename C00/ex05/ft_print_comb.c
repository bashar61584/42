/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <hosmankh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:13:07 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/01 13:14:41 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
void write_char(char d)
{
    write(1,&d,1);
}
void put_char(int a,int b, int c)
{
    write_char(a);
    write_char(b);
    write_char(c);
    write_char(',');
    write_char('');
    
}
void ft_print_comb()
{
for (int i=0; i<=9; i++)
    {
        for(int j=i+1; j<=9; j++)
        for(int k=j+1; k<=9; k++)
        {
        // printf("%d%d%d , ",i,j,k);
        put_char(i,j,k);
        }
    }
}

int main()
{
    // int l=0;
    
    // printf("%d",l);
    ft_print_comb();
    return 0;
}
