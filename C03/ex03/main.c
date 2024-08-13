#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int len;
	int count; 

	len = 0; 
	count = 0;
	while (dest[len] != '\0')
	{
		len++; 
	}
	while (src[count] != '\0' && n>0)
	{
		dest[len + count] = src[count]; 
		count++; 
		n--; 
	}
	dest[len + count] = '\0'; 
	
	return (dest);
}
int	main()
{
	char dest[] = "abc";
	char src[] = "defghij";
	char *dest1; 
	char *src1; 
	dest1=dest; 
	src1=src; 
	char *dest2; 
	printf("%s", "Hello ");
	dest2=ft_strncat(dest1, src1, 3); 
	while ( *dest2 != '\0' )
	{
		printf("%c",*dest2); 
		dest2++; 
	}
    return (0);
}
