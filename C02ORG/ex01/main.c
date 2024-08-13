#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n); 

int main()
{
    char src[]="Habib ul bashar"; 
    char dest[10]; 
    char *pdest=dest; 
    char *psrc=src; 
    printf("%s \n", ft_strncpy(pdest, psrc, sizeof(dest) ));
    return (0); 
}