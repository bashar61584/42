#include <stdio.h>

int 	ft_strlen(char *str);
int main(void)
{
  char st[]="Hello world"; 
  
  char *str;
  str=&st; 
   printf("%d",ft_strlen(str)) ;
	return (0);
}