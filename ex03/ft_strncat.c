/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:32:20 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/15 18:16:42 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	char	st1[] = "42lisboa yes";
	char	st2[] = "destination";
	int	s;

	s = 2;
	ft_strncat(st2, st1, s);
	printf("%s\n", st2);
}
*/
