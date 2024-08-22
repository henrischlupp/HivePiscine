/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:05:41 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 14:17:39 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
	printf("%d\n", ft_str_is_uppercase("wednesday"));
	printf("%d\n", ft_str_is_uppercase("WEDNESDAY"));
	printf("%d\n", ft_str_is_uppercase("wEdNeSdAy"));
	printf("%d\n", ft_str_is_uppercase("1337"));
	printf("%d\n", ft_str_is_uppercase(""));
	return(0);
}
*/
