/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:14:02 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/15 11:35:31 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		sqrt = i * i;
		if (sqrt == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(361));
	return (0);
}
*/	
