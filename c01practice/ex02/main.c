#include <stdio.h>

void	ft_swap(int *a, int *b); 

int main(void)
{
    int d=10; 
    int c=14; 
      printf(" value of the D before swaping = %d \n", d); 
    printf("Value of the c before swaping = %d \n", c); 
    int *dv; 
    dv=&d; 
    int *cv; 
    cv=&c; 
    // int swap=*dv;
    // *dv=*cv;
    // *cv=swap; 
    ft_swap(dv,cv);

    printf(" value of the D after swaping = %d \n", d); 
    printf("Value of the c after swaping = %d \n", c); 
	return (0);
}