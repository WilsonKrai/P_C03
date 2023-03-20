/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:46:36 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/20 14:37:57 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_stringl(char *len);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	i;
	unsigned int	j;

	destl = my_stringl(dest);
	srcl = my_stringl(src);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size <= destl || size == 0)
	{
		return (size + srcl);
	}
	while (src[j] != '\0' && j < size - destl - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destl + srcl);
}

int	my_stringl(char	*len)
{
	int	l;

	l = 0;
	while (len[l] != '\0')
		l++;
	return (l);
}
/*
int	main(void)
{
	char	t1[] = "test this string";
	char	t2[] = "string";

	printf("%d\n", ft_strlcat(t1, t2, 5));
}
*/
