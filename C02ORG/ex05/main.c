#include <stdio.h>

int	ft_str_is_uppercase(char *str);
int main()
{
    char src[] = "ABc"; 
	char *src2=src;
	printf("%d",ft_str_is_uppercase(src2));
    return (0); 
}