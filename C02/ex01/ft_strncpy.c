/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:21:25 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/11 19:12:19 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char	src[] = "Testing 123123";
	char dest[15];
	unsigned int n = 10; 

	ft_strncpy(dest, src, n);

	printf("Dest string aft. the copy: %s", dest);
}
*/
