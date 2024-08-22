/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:30:24 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/17 16:38:50 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("ABC", "AB", 3)); 
	printf("%d\n", ft_strncmp("ABC", "abc", 3)); 
	printf("%d\n", ft_strncmp("abcdef", "abc", 6));
	printf("%d\n", ft_strncmp("abcdec", "abc", 3));
	return (0);
}

