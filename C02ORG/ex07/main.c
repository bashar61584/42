#include <stdio.h>

char	ft_strupcase(char *str);
int main()
{
	char src[] = "abc"; 
	char *src2=src;
   	ft_strupcase(src2);
    printf("%s",src);
	return (0); 
}