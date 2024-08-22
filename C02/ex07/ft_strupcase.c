/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:32:32 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/07 18:26:08 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	wurst;

	wurst = 0;
	while (str[wurst] != '\0')
	{
		if (str[wurst] >= 'a' && str[wurst] <= 'z')
		{
			str[wurst] = str[wurst] - 32;
		}
		wurst++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main(void)
{
	char test1[] = "hellohello";
	printf("%s\n", ft_strupcase(test1));
	return(0);
}
*/
