/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:13:59 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:34 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	t1[] = "aas";
	char	t2[] = "aada";
	int	s = 4;
	int	nrt;
	int	nrt2;

	nrt = ft_strncmp(t1, t2, s);
	printf("%d\n", nrt);

	nrt2 = strncmp(t1, t2, s);
	printf("%d\n", nrt);
}
*/
