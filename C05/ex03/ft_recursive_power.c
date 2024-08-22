/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschlupp <hschlupp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:57:28 by hschlupp          #+#    #+#             */
/*   Updated: 2024/08/14 16:34:41 by hschlupp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
#include<stdio.h>
int main ()
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(5, -3));
	printf("%d\n", ft_recursive_power(-5, 3));
	return (0);
}
*/
