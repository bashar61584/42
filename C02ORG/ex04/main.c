#include <stdio.h>

int	ft_str_is_lowercase(char *str);
int main()
{
    char src[] = ""; 
	char *src2=src;
	printf("%d",ft_str_is_lowercase(src2));
    return (0); 
}