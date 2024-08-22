/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:48:45 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 13:29:01 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_numeric("qwfqfqqgqggg;';@"));
	printf("%d\n", ft_str_is_numeric("472901"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
*/	
