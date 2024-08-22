/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:32:55 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 13:56:05 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include<stdio.h>

int main()
{
	printf("%d\n", ft_str_is_lowercase("HALOOO"));
	printf("%d\n", ft_str_is_lowercase("@"));
	printf("%d\n", ft_str_is_lowercase("haloo"));
	printf("%d\n", ft_str_is_lowercase("1231"));
	printf("%d\n", ft_str_is_lowercase(""));

	return(0);
}
*/
