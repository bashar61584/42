#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);
int main(void)
{
  int ar[]={1,2,3,4,5,6}; 
  int *par; 
  par=ar; 
  int	c_count;
	int	r_count;
	int	swap;


 
  int size=sizeof(ar)/sizeof(int);

	r_count = size - 1;
	c_count = 0;
	swap = 0;
  

  while (c_count<size)
  {
    printf("%d",ar[c_count]); 
    c_count++; 
  }
  
ft_rev_int_tab(par, size);
  
printf("\n"); 

c_count=0; 
  while (c_count<size)
  {
    printf("%d",ar[c_count]); 
    c_count++; 
  }
  
  return (0); 
}