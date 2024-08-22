/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:55:41 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/11 13:19:14 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include<stdio.h>
int main (void)
{
	printf("%d\n", ft_strcmp("123", "123"));
	printf("%d\n", ft_strcmp("ABC", "abc"));
	printf("%d\n", ft_strcmp("3", "1"));
	return (0);
}
*/
