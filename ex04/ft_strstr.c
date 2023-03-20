/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:00:07 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/15 18:18:02 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j] == '\0')
					return (&str[i]);
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			i++;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	t1[] = "";
	char	t2[] = "ddsd";
	char	t3[] = "";
	char	t4[] = "dfs";
	
	printf("%s\n", ft_strstr(t1, t2));
	printf("%s\n", strstr(t3, t4));
}
*/
