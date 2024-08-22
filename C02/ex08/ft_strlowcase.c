/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:29:51 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 21:03:00 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	pommes;

	pommes = 0;
	while (str[pommes] != '\0')
	{
		if (str[pommes] >= 'A' && str[pommes] <= 'Z')
		{
			str[pommes] = str[pommes] + 32;
		}
		pommes++;
	}
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char test[] = "helloHELLO123";
	printf("%s\n", ft_strlowcase(test));
	return(0);
}
*/
