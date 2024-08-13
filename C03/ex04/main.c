
char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int	i; 

	i = 0; 
	temp = str;
	if (to_find == '\0')
		return (temp);
	while (*temp)
	{
		if (*temp == *to_find)
		{
			i = 0;
			while (temp[i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (temp);
		}
		temp++;
	}
}
int	main()
{
	char str[] = "Tutorialpoints";
	char to_find[] = "ial";
	char *str1; 
	char *src1; 
	str1=str; 
	src1=to_find; 
	// printf("%s", "Hello ");
	ft_strstr(str1, src1); 
	// while ( *str2 != '\0' )
	// {
	// 	printf("%c",*str2); 
	// 	str2++; 
	// }
    return (0);
}
