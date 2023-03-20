/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:54:24 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/15 18:11:19 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	while (dest[i + j] != '\0')
	{
		dest[i + j] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	st1[] = "string 1 teste";
	char	st2[] = "string 2";

	ft_strcat(st2, st1);
	printf("%s\n", st2);
}
*/
