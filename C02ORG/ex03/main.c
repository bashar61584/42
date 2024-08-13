#include <stdio.h>

int	ft_str_is_numeric(char *str);
int main()
{
    char src[] = "9087654e356754321"; 
	char *src2=src;
	printf("%d",ft_str_is_numeric(src2));
    return (0); 
}