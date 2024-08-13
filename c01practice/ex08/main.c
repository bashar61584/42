#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int main(void)
{
  int ar[]={8,9,0,3,5,4,7,1,6,2}; 
  int *par; 
  par=ar; 
  int	c_count;


 
  int size=sizeof(ar)/sizeof(int);


// 	c_count = 0;


//   while (c_count<size)
//   {
//     printf("%d",ar[c_count]); 
//     c_count++; 
//   }
  
ft_sort_int_tab(par, size);
  
// printf("\n"); 

c_count=0; 
  while (c_count<size)
  {
    printf("%d",ar[c_count]); 
    c_count++; 
  }
  
  return (0); 
}