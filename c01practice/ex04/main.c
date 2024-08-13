#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
    int a=11; 
    int b=2; 
    
    int *aa=&a; 
    int *bb=&b; 

    printf(" value of the a  = %d \n", a); 
    printf("Value of the b  = %d \n", b); 

    ft_ultimate_div_mod(aa,bb); 
    printf(" value of the a  = %d \n", a); 
    printf("Value of the b  = %d \n", b); 
	return (0);
}