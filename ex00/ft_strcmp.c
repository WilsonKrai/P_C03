/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:31:14 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/20 14:19:03 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	t1[] = "";
	char	t2[] = "";
	int	tnr;
	int	tnr2;

	tnr = ft_strcmp(t1, t2);
	printf("%d\n", tnr);
	tnr2 = strcmp(t1,t2);
	printf("%d\n", tnr2);
}
*/
