#include <stdio.h>

char	ft_strlowcase(char *str);
int main()
{
	char src[] = "ABC"; 
	char *src2=src;
   	ft_strlowcase(src2);
    printf("%s",src);
	return (0); 
}