/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:20:47 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 15:16:56 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main()
{
	char *test1 = "\tTestng";
	char *test2 = "asd\x01";
	char *test3 = "wurst";

	printf("%d\n", ft_str_is_printable("123asd1"));
	printf("%d\n", ft_str_is_printable(test3));
	printf("%d\n", ft_str_is_printable(test1));
	printf("%d\n", ft_str_is_printable(test2));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}
*/
