#include <stdio.h>

int	ft_str_is_alpha(char *str);
int main()
{
    char src[] = ""; 
	char *src2=src;
	printf("%d",ft_str_is_alpha(src2));
    return (0); 
}