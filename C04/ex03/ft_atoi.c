/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:52:36 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/13 16:43:27 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	oddoreven;

	number = 0;
	oddoreven = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			oddoreven++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (!(oddoreven % 2))
		return (number);
	return (-number);
}
/*
#include<stdio.h>

int	main(void)
{
	char	*s;

			s = " --+---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
*/
