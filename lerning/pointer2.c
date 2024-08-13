#include <stdio.h>
#include <unistd.h>
void    ft_char(char c)
{
    write(1,&c,1); 
}
int	main(void)
{
	int var; 
	int *po = 0; 
	var = 10; 
	po=&var; 

	printf("After Change = %d \n ",*po);
	printf("After Change = %p \n ",po);
	printf("After Change = %p \n ",&var);
	*po=30; 
	printf("After Change = %d \n ",*po);
	printf("After Change = %d \n ",var);
	return (0);
}
