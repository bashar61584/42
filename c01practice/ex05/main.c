#include <stdio.h>

void	ft_putstr(char *str);
int main(void)
{
  char st[]="Hello world"; 
  
  char *str;
  str=&st; 
    ft_putstr(str);
	return (0);
}