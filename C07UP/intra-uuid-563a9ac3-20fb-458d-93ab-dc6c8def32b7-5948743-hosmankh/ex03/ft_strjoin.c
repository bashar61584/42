/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosmankh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:13:41 by hosmankh          #+#    #+#             */
/*   Updated: 2024/08/18 22:13:44 by hosmankh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

int main(void)
{
    char *strs[] = {"Hello", "World", "42"};
    char *sep = " ";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep);

    if (result != NULL)
    {
        printf("Joined string: %s\n", result);
        free(result); // Free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}