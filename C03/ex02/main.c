#include <stdio.h>

// char	*ft_strcat(char *dest, char *src);
char	*ft_strcat(char *dest, char *src)
{
	char	*ptrst;

	ptrst = dest;
	while (*ptrst != 0)
	{
		ptrst++;
	}
	while (*src != 0)
	{
		*ptrst = *src;
		ptrst++;
		src++;
	}
	*ptrst = '\0';
	return (ptrst);
}
int	main()
{
	char dest[] = "abc";
	char src[] = "def";

	printf("%s",ft_strcat(&dest, &src)); 
    return (0);
}