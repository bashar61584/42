#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod);

int main(void)
{
    int a=11; 
    int b=2; 
    int div=0; 
    int mod=0; 
    int *dv; 
    dv=&div; 
    int *modp; 
    modp=&mod; 
    // int swap=*dv;
    // *dv=*cv;
    // *cv=swap; 
    ft_div_mod(a,b,dv,modp); 
    printf(" a divide by b  = %d \n", div); 
    printf("a modulus b = %d \n", mod); 
	return (0);
}