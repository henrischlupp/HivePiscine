/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:21:17 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/14 15:55:04 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	multiplicator;

	i = 1;
	multiplicator = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	while (i < power)
	{
		nb = nb * multiplicator;
		i++;
	}
	return (nb);
}
/*
#include<stdio.h>
int	main ()
{
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	return (0);
}
*/	
