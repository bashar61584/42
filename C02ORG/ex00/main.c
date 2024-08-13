#include <stdio.h>
char	*ft_strncpy(char *dest, char *src);
int main()
{
    char src[]="Habib"; 
    char dest[]=""; 
    
    printf("%s \n",ft_strncpy(&dest, &src ));
    return (0); 
}